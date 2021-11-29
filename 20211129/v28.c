#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 4)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    if (k > 1)
        if ((st[k] != 1 || st[k] != 4)
            && (st[k] != 1 || st[k] != 4))
            return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return 4 == k;
}

void tipar ()
{
    for (int i = 1; i <= 4; i++)
    {
        if (st[i] == 1)
            printf ("i");
        if (st[i] == 2)
            printf ("n");
        if (st[i] == 3)
            printf ("f");
        if (st[i] == 4)
            printf ("o");
    }
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
            as = succesor (k);
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
    back (1);
    return 0;
}
