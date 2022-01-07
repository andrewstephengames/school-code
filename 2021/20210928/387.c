#include <stdio.h>
#define ll long long int

ll n;

ll div (ll n)
{
    ll d = 1, s = 0;
    while (d*d < n)
    {
        if (n%d == 0)
        {
            if (n/d%2 == 1)
                s+=n/d;
            if (d%2 == 1)
                s+=d;
        }
        d++;
    }
    if (d*d == n)
        if (d%2 == 1) s+=d;
    return s;
}

int main ()
{
    scanf ("%d", &n);
    printf ("%d", div(n));
    return 0;
}
