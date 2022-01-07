#include <stdio.h>

int a[1001], n;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

void afisare()
{
    for (int i = 1; i <= n; i++)
        if (a[i]%2)
            printf ("%d ", a[i]);
}

int main ()
{
    citire ();
    afisare ();
    return 0;
}
