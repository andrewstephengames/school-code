//TODO
//pbinfo
#include <stdio.h>

int n, k, st[16];

void init (int x)
{
    st[x] = 0;
}

int succesor (int x)
{
    if (st[x] < n)
    {
        st[x]++;
        return 1;
    }
    return 0;
}

int solutie (int x)
{
    return k == x;
}

int valid (int x)
{
    if (k > 1)
    {
        if (st[x]%2 == 0 && st[x-1]%2 == 0)
            return 0;
    }
    for (int i = 1; i < x; i++)
        if (st[x] <= st[i])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= k; i++)
        fprintf (stdout, "%d ", st[i]);
    fprintf (stdout, "\n");
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
                init(k);
            }
        else k--;
    }
}

int main ()
{
    fscanf (stdin, "%d %d", &n, &k);
    back (1);
    return 0;
}
