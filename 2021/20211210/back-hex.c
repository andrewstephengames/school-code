//Generate permutations of 4 digit hex numbers
#include <stdio.h>

int st[17];

void init (int k)
{
    st[k] = -1;
}

int succesor (int k)
{
    if (st[k] < 16)
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
    return 5 == k;
}

void tipar ()
{
    printf ("0x");
    for (int i = 1; i <= 5; i++)
    {
        if (st[i] < 10)
        {
            printf ("%d", st[i]);
        }
        if (st[i] >= 10)
        {
            switch (st[i])
            {
                case 10:
                    printf ("A");
                    break;
                case 11:
                    printf ("B");
                    break;
                case 12:
                    printf ("C");
                    break;
                case 13:
                    printf ("D");
                    break;
                case 14:
                    printf ("E");
                    break;
                case 15:
                    printf ("F");
                    break;
            }
        }
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
            as = succesor (k);
            if (as) ev = valid (k);
        } while (as && !ev);
        if (as)
            if (solutie(k))
                tipar ();
            else
            {
                k++;
                init (k);
            }
        else k--;
    }
}


int main ()
{
    back (1);
    return 0;
}
