#include <stdio.h>
int st[10], n;

void init (int k)
{
    st[k] = -1;
}

int solutie (int k)
{
    return 5 == k;
}

int valid (int k)
{
    if (st[k] == 0 && st[k] == st[k-1] &&
        st[k] == st[k-2])
        return 0;
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
            return 0;
    return 1;
}

int succesor (int k)
{
    if (st[k] < 5)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
        printf ("%d", st[i]);
    printf ("\n");
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
                if (k == 0)
                    k = 1;
                else k = 0;
                init(k);
            }
        }
        else
        {
            if (k == 1)
                k = 0;
            else k = 1;
        }
    }
}

int main ()
{
    back(1);
    return 0;
}
