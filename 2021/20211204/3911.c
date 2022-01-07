//TODO: no output
#include <stdio.h>

int st[16], n, a[16];

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d++)
        if (n%d == 0)
            return 0;
    return 1;
}

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
    if (prim(a[st[k]]))
        if (a[st[k]] != st[k])
            return 0;
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
        printf ("%d ", a[st[i]]);
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
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    back (1);
    return 0;
}
