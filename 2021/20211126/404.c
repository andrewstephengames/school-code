//FIXME
#include <stdio.h>

int st[10], n;

void init (int k)
{
    st[k] = -1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d", st[i]);
    printf ("\n");
}

int solutie (int k)
{
    return n == k;
}

int succesor (int k)
{
    if (st[k] < n)
    {
        st[k]+=5;
        return 1;
    }
    return 0;
}

int valid (int n)
{
    return 1;
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
