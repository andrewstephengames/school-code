#include <stdio.h>
#define ll long long int

int n;

ll sumdiv (int n)
{
    ll d = 1, s = 0;
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
    if (2*n == sumdiv(n))
        printf ("%d este perfect", n);
    else printf ("%d nu este perfect", n);
    return 0;
}
