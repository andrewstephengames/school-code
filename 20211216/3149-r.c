#include <stdio.h>
#include <string.h>

int st[11], n;
char s[11];

int valid (int k)
{
    if (k == 1)
        if (!strchr ("aeiou", s[st[k]-1]))
            return 0;
    if (k == n)
    {
        if (!strchr ("aeiou", s[st[k]-1]))
            return 0;
    }
    for (int i = 1; i < k; i++)
        if (s[st[i]] == s[st[k]])
            return 0;
    return 1;
}

void tipar()
{
    for (int i = 1; i <= n; i++)
        printf ("%c", s[st[i]-1]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
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
    scanf ("%s", &s);
    n = strlen(s);
    back(1);
    return 0;
}
