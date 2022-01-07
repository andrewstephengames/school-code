#include <stdio.h>

int a[1000001], n, x, p;

void citire ()
{
    scanf ("%d %d %d", &n, &x, &p);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[i]);
}

int main ()
{
    citire ();
    for (int i = n; i >= p; i--)
        a[i+1] = a[i];
    a[p] = x;
    n++;
    afisare ();
    return 0;
}
