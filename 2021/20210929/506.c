#include <stdio.h>
#include <math.h>

int n, a[201], verify;

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d <= sqrt(n); d += 2)
        if (n%d == 0) return 0;
    return 1;
}

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    citire ();
    for (int i = 0; i < n; i++)
        if (prim (a[i])) verify++;
    if (verify > 0) printf ("DA");
    else printf ("NU");
    return 0;
}
