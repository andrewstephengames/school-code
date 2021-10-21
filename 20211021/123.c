#include <stdio.h>

FILE *in, *out;

int n, st[10];

void init (int k)
{
    st[k] = 0;
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", st[i]);
    fprintf (out, "\n");
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

void back (int k)
{
    int as, ev;
    while (k > 0)
    {
        do
        {
            as = succesor(k);
            if (as) ev = valid(k);
        } while (as && !ev);
        if (as)
            if (solutie(k)) afisare();
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
    in = fopen ("permutari.in", "r");
    out = fopen ("permutari.out", "w");
    fscanf (in, "%d", &n);
    back(1);
    return 0;
}
