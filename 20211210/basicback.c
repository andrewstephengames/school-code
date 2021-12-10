/*
    Sa se genereze permutarile multimii {1, 2, 3}.
*/
#include <stdio.h>

int st[10], n;

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
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return n == k;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
    {
        if (i < n)
            printf ("%d ", st[i]);
        if (i == n)
            printf ("%d", st[i]);
    }
    printf ("; ");
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
    scanf ("%d", &n);
    back (1);
    return 0;
}
