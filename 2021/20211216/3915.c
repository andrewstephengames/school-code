#include <stdio.h>
#include <string.h>

int st[12], n;
char a[12];

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

int solutie (int k)
{
    return n == k;
}

int tipar ()
{
    for (int i = 1; i <= n; i++)
        printf ("%c", a[st[i]-1]);
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
            as = succesor(k);
            if (as) ev = valid (k);
        } while (as && !ev);
        if (as)
            if (solutie(k))
                tipar();
            else
            {
                k++;
                init (k);
            }
        else k--;
    }
}

int main ()
{
    scanf ("%s", a);
    n = strlen(a);
    back(1);
    return 0;
}
