//TODO
//pbinfo
#include <stdio.h>

#define INT_MAX 2147483647

int nrdivprim (int n)
{
    int d = 2, p, nr = 0;
    while (n > 1)
    {
        p = 0;
        while (n%d == 0)
        {
            p++;
            n /= d;
        }
        if (p)
            for (int i = 1; i <= p; i++)
                nr++;
        d++;
        if (n > 1 && d*d > n)
            d = n;
    }
    return nr;
}

int main ()
{
    int n, a[1002], max = 0, maxp, min = INT_MAX, nr = 0;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d", &a[i]);
        if (nrdivprim(a[i]) > max)
        {
            max = nrdivprim(a[i]);
            maxp = a[i];
            nr++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == maxp && nr > 1)
            if (a[i] < min)
                min = a[i];
    }
    if (nr > 1)
        printf ("%d", min);
    else printf ("%d", maxp);
    return 0;
}
