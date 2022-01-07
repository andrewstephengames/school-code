#include <stdio.h>
#include <limits.h>

int main ()
{
    int n, d = 2, p, max = INT_MIN;
    scanf ("%d", &n);
    while (n > 1)
    {
        p = 0;
        while (n%d == 0)
        {
            p++;
            n /= d;
        }
        if (p)
            if (d > max)
                max = d;
        d++;
        if (n > 1 && d*d > n)
            d = n;
    }
    printf ("%d", max);
    return 0;
}
