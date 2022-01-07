#include <stdio.h>

int n, p, a[1501];

void citire ()
{
    scanf ("%d %d", &n, &p);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

void afisare ()
{
    for (int i = 0; i < n; i++)
        printf ("%d ", a[i]);
}

int main ()
{
    citire ();
    for (int i = p; i < n; i++)
        a[i-1] = a[i];
    n--;
    afisare ();
    return 0;
}
