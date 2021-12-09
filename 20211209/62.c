#include <stdio.h>

int main ()
{
    int n, d = 2, p;
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
            printf ("%d %d\n", d, p);
        d++;
        if (n > 1 && d*d > n)
            d = n;
    }
    return 0;
}
