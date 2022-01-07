#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 3)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    return 1;
}

int solutie (int k)
{
    return 3 == k;
}

void tipar ()
{
    char c;
    for (int i = 1; i <= 3; i++)
    {
        c = st[i]+96;
        printf ("%c", c);
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
            if (as) ev = valid(k);
        } while (as && !ev);
        if (as)
            if (solutie(k))
                tipar ();
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
    back(1);
    return 0;
}
