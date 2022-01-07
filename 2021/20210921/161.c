#include <stdio.h>

int a[201], n;

void citire ()
{
    scanf ("%d", &n);
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
    int ma = 0, nr = 0;
    citire();
    for (int i = 0; i < n; i++)
        if (a[i] != 0)
        {
            ma += a[i];
            nr++;
        }
    for (int i = 0; i < n; i++)
        if (a[i] == 0)
            a[i] = ma/nr;
    afisare ();
}
