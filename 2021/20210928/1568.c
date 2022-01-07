#include <stdio.h>

int n;

float div (int n)
{
    int d = 1, nr = 0;
    float s = 0.0;
    while (d*d < n)
    {
        if (n%d == 0)
        {
            s += n/d + d;
            n += 2;
        }
        d++;
    }
    if (d*d == n)
    {
        s += d;
        nr++;
    }
    return s/nr;
}

int main ()
{
    scanf ("%d", &n);
    printf ("%.2f", div(n));
    return 0;
}
