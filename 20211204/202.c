#include <stdio.h>

int st[10], n;
FILE *in, *out;

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
    if (st[k] == k)
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
        fprintf (out, "%d ", st[i]);
    fprintf (out, "\n");
}

void back (int k)
{
    int as, ev;
    init(k);
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
    in = fopen ("permpf.in", "r");
    out = fopen ("permpf.out", "w");
    fscanf (in, "%d", &n);
    back (1);
    return 0;
}
