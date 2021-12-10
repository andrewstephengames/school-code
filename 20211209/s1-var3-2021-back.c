#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 6)
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
    return 4 == k;
}

void tipar ()
{
    printf ("(");
    for (int i = 1; i <= 4; i++)
    {
        if (i < 4)
        switch (st[i])
        {
            case 1:
                printf ("MAVA, ");
                break;
            case 2:
                printf ("MCA, ");
                break;
            case 3:
                printf ("MCFR, ");
                break;
            case 4:
                printf ("MNHCV, ");
                break;
            case 5:
                printf ("MNLR, ");
                break;
            case 6:
                printf ("MNT, ");
                break;
        }
        if (i == 4)
        switch (st[i])
        {
            case 1:
                printf ("MAVA");
                break;
            case 2:
                printf ("MCA");
                break;
            case 3:
                printf ("MCFR");
                break;
            case 4:
                printf ("MNHCV");
                break;
            case 5:
                printf ("MNLR");
                break;
            case 6:
                printf ("MNT");
                break;
        }
    }
    printf (")\n");
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
    back (1);
    return 0;
}
