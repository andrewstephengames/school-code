//TODO
#include <stdio.h>

int factori (int n, int m)
{
    int p1, p2, d1 = 2, d2 = 2, nr = 0;
    while (n > 1 && m > 1)
    {
        p1 = 0, p2 = 0;
        while (n%d1 == 0)
        {
            p1++;
            n /= d1;
        }
        while (m%d2 == 0)
        {
            p2++;
            m /= d2;
        }
        if (p1 && p2)
        {
            if (p1 == p2)
                if (d1 == d2)
                    nr++;
        }
        d1++, d2++;
        if (n > 1 && d1*d1 > n)
            d1 = n;
        if (m > 1 && d2*d2 > m)
            d2 = m;
    }
    return nr;
}

int main ()
{
    int n, m;
    scanf ("%d %d", &n, &m);
    return 0;
}
