#include <stdio.h>
#include <math.h>

int nrdiv (int n)
{
    int nr = 0, d = 1;
    while (d*d < n)
    {
        if (n%d == 0)
            nr += 2;
        d++;
    }
    if (d*d == n)
        nr++;
    return nr;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", nrdiv (pow(n, n))%59999);
    return 0;
}
