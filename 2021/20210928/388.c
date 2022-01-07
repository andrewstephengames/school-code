#include <stdio.h>

int n;

int div (int n)
{
    int d = 1, nr = 0;
    while (d*d < n)
    {
        if (n%d == 0)
        {
            if ((n/d)%2 == 0)
                nr++;
            if (d%2 == 0)
                nr++;
        }
        d++;
    }
    if (d*d == n)
        if (d%2 == 0) nr++;
    return nr;
}

int main ()
{
    scanf ("%d", &n);
    printf ("%d", div(n));
    return 0;
}
