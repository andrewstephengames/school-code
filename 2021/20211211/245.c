//pbinfo
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
    int n, max = INT_MIN, min = INT_MAX, a[100001], k = 0, maxp;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (nrdiv(i) > max)
            max = nrdiv(i);
    }
    for (int i = 1; i <= n; i++)
        if (nrdiv(i) == max)
        {
            k++;
            a[k] = i;
        }
    for (int i = 1; i <= k; i++)
        if (a[i] < min)
            min = a[i];
    if (k == 1)
        printf ("%d", maxp);
    else printf ("%d", min);
    return 0;
}

