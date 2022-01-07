#include <stdio.h>
#include <string.h>

int st[12], n;
char a[12];

int valid (int k)
{
    if (k > 1)
    {
        if (!strchr("aeiou", a[st[k]-1]) &&
            !strchr ("aeiou", a[st[k-1]-1]))
            return 0;
        if (strchr("aeiou", a[st[k]-1]) &&
            strchr ("aeiou", a[st[k-1]-1]))
            return 0;
    }
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}


int tipar ()
{
    for (int i = 1; i <= n; i++)
        printf ("%c", a[st[i]-1]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 0; i <= n; i++)
    {
        st[k] = i;
        if (valid(k))
            if (n == k)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    scanf ("%s", a);
    n = strlen(a);
    back(1);
    return 0;
}
