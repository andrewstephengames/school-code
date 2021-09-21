#include <stdio.h>

int a[201], b[201], n;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

void afisare ()
{
    for (int i = 0; i < n; i++)
        printf ("%d ", b[i]);
}

int main ()
{
    int s = 0;
    citire ();
    for (int i = 0; i < n; i++)
        s += a[i];
    for (int i = 0; i < n; i++)
        b[i] = s-a[i];
    afisare();
    return 0;
}
