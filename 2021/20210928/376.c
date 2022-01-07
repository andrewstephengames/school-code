#include <stdio.h>

long long int n;

long long int div (int n)
{
    long long int d = 1, s = 0;
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
    scanf ("%d", &n);
    printf ("%d", div(n));
    return 0;
}
