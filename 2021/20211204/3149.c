#include <stdio.h>
#include <string.h>

int st[11], n;
char s[11];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < n)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

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

int solutie (int k)
{
    return n == k;
}

void tipar()
{
    for (int i = 1; i <= n; i++)
        printf ("%c", s[st[i]-1]);
    printf ("\n");
}

void back (int k)
{
    int as, ev;
    init (k);
    while (k > 0)
    {
        do
        {
            as = succesor (k);
            if (as) ev = valid (k);
        } while (as && !ev);
        if (as)
            if (solutie(k))
                tipar();
            else
            {
                k++;
                init(k);
            }
        else k--;
    }
}

int main ()
{
    scanf ("%s", &s);
    n = strlen(s);
    back(1);
    return 0;
}
