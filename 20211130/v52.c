#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
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

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return 5 == k;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
    {
        switch (st[i])
        {
            case 1:
                printf ("c");
                break;
            case 2:
                printf ("a");
                break;
            case 3:
                printf ("i");
                break;
            case 4:
                printf ("e");
                break;
            case 5:
                printf ("t");
                break;
        }
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
            if (solutie (k))
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
