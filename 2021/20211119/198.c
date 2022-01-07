#include <stdio.h>
//#include <time.h>

int st[10], n;
FILE *in, *out;

void init (int k)
{
    st[k] = -1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        if (st[i] == 1)
            fprintf (out, "%d ", i);
    fprintf (out, "\n");
}

int valid (int k)
{
    return 1;
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

int solutie (int k)
{
    return n == k;
}

void back (int k)
{
    int as, ev;
    init(k);
    while (k > 0)
    {
        do
        {
            as = succesor(k);
            if (as) ev = valid(k);
        } while (as && !ev);
        if (as)
        {
            if (solutie(k))
                tipar();
            else
            {
                k++;
                init(k);
            }
        }
        else k--;
    }
}

int main ()
{
    in = fopen ("submultimi.in", "r");
    out = fopen ("submultimi.out", "w");
    fscanf (in, "%d", &n);
    back(1);
//    cout << "\n" << (float)clock()/1000 << " ms\n";
    return 0;
}
