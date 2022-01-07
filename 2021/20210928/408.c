#include <stdio.h>

int n;

int ogl (int n)
{
    int o = 0;
    while (n)
    {
        o = o*10 + n%10;
        n /= 10;
    }
    return o;
}

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
    scanf ("%d", &n);
    printf ("%d", nrdiv(ogl(n)));
    return 0;
}
