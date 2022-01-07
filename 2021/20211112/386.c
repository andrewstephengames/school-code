#include <stdio.h>

int st[10];

int firstdigit (int n)
{
    while (n > 9) n /= 10;
    return n;
}

void init (int k)
{
    st[k] = 0;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
        printf ("%d ", st[i]);
    printf ("\n");
}

int solutie (int k)
{
    return 5 == k;
}

int valid (int k)
{
    for (int i = 1; i < n-m+1; i++)
        if (st[k] == st[i])
            return 0;
    return firstdigit();
}

int succesor (int k)
{
    if (st[k] < n)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

void back (int k)
{
    int as, ev;
    while (k > 0)
    {
        init(k);
        do
        {
            as = succesor(k);
            if (as) ev = valid (k);
        } while (as && !ev);
        if (as)
        {
            if (solutie(k))
                tipar();
            else
            {
                k++;
                init (k);
            }
        }
        else k--;
    }
}

int main ()
{
    back (1);
    return 0;
}
