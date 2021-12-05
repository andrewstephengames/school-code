//TODO
#include <stdio.h>

FILE *in, *out;
int n, st[11];

void init (int k)
{
    st[k] = -1;
}

int succesor (int k)
{
    if (st[k] < 1)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        if (st[i] == 1)
        {
            if (i > 1)
                if (i - (i-1) <= 1)
                    fprintf (out, "%d ", i);
        }
    fprintf (out, "\n");
}

int solutie (int k)
{
    return k == n;
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
    in = fopen ("submultimi1.in", "r");
    out = fopen ("submultimi1.out", "w");
    fscanf (in, "%d", &n);
    back (1);
    return 0;
}
