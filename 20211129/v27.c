#include <stdio.h>

int st[10], n;

void init (int k)
{
    st[k] = -1;
}

int succesor (int k)
{
    if (st[k] < 2)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    if (k == 1 && st[k] == 0)
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
        if (st[i] == 0)
            printf ("0");
        if (st[i] == 1)
            printf ("2");
        if (st[i] == 2)
            printf ("8");
    }
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
            if (as) ev = valid(k);
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
    back(1);
    return 0;
}
