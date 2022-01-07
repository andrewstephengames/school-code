//TODO
//pbinfo
#include <stdio.h>

int main ()
{
    int n, p, d = 2, max = -1, maxn;
    scanf ("%d", &n);
    while (n > 1)
    {
        p = 0;
        while (n%d == 0)
        {
            p++;
            n /= d;
        }
        if (p > max)
        {
            p = max;
            maxn = d;
        }
        d++;
        if (n > 1 && d*d > n)
            d = n;
    }
    printf ("%d", maxn);
    return 0;
}
