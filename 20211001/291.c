#include <stdio.h>

int n, a[101], verify;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int cif (int n)
{
    int nr = 0;
    while (n)
    {
        nr++;
        n /= 10;
    }
    return (nr%2 == 0);
}

int main ()
{
    citire ();
    for (int i = 0; i < n; i++)
        if (cif(a[i])) verify++;
    if (verify == n) printf ("DA");
    else printf ("NU");
    return 0;
}
