#include <stdio.h>
#define ll long long

ll n;

int cmmdp (int n)
{
    int d = 2;
    while (d > 1)
    {
        if (n%d == 0) break;
        d++;
    }
    return d*d;
}

int main ()
{
    scanf ("%d", &n);
    printf ("%d", cmmdp(n));
    return 0;
}
