//pbinfo
#include <stdio.h>

int main ()
{
    int n, d = 2, p, s = 0;
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
                s += d;
        d++;
        if (n > 1 && d*d > n)
            d = n;
    }
    printf ("%d", s);
    return 0;
}
