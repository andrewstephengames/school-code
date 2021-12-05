#include <stdio.h>

int st[10], n, a[10], s = 0, nr = 0;

int ogl (int n)
{
    int og = 0;
    while (n)
    {
        og = og*10+n%10;
        nr++;
        n /= 10;
    }
    return og;
}

void init (int k)
{
    st[k] = a[1]-1;
}

int succesor (int k)
{
    if (st[k] < nr)
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
    return n == k;
}

void tipar ()
{
    for (int i = 1; i <= nr; i++)
        s += a[st[i]];
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
    int i = 1;
    scanf ("%d", &n);
    while (ogl(n))
    {
        a[i] = n%10;
        n /= 10; 
        i++;
    }
    back (1);
    printf ("%d", s);
    return 0;
}

