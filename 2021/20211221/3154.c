//5!=120
#include <stdio.h>
#include <string.h>

char s[12];
int st[12];

int valid (int k)
{
    if (strchr ("aeiou", st[k]))
        if (s[st[k]] != s[k])
            return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= strlen(s); i++)
        printf ("%c", s[st[i]-1]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 1; i <= strlen(s); i++)
    {
        st[k] = i;
        if (valid(k))
            if (strlen(s) == k)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    scanf ("%s", s);
    back (1);
    return 0;
}
