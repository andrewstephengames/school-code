#include <stdio.h>

int numcif (int n)
{
    int nr = 0;
    if (n == 0) return 1;
    while (n)
    {
        nr++;
        n/=10;
    }
    return nr;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", numcif(n));
    return 0;
}
