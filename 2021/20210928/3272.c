//TODO: inefficient
#include <stdio.h>

int n, a[1001];

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

long long int sumdiv (int n)
{
    long long int s = 0, d = 1;
    while (d*d < n)
    {
        if (n%d == 0)
            s += n/d + d;
        d++;
    }
    if (d*d == n)
        s += d;
    return s;
}

int main ()
{
    long long int mastersum = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        mastersum += sumdiv(ogl(a[i]));
    }
    printf ("%d", mastersum);
    return 0;
}
