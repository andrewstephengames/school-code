#include <stdio.h>
#include <limits.h>

int nrdiv (int n)
{
    int d = 1, nr = 0;
    while (d*d < n)
    {
        if (n%d == 0)
            nr+=2;
        d++;
    }
    if (d*d == n)
        nr++;
    return nr;
}

int main ()
{
    int n, max = INT_MIN, maxp, min = INT_MAX;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (nrdiv(i) > max)
        {
            max = nrdiv(i);
            maxp = i;
        }
    }
    return 0;
}
