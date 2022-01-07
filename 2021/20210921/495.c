#include <stdio.h>
#include <math.h>

int a[201], b[201], n, j;

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d += 2)
        if (n%d == 0) return 0;
    return 1;
}

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

void afisare ()
{
    for (int i = 0; i < j; i++)
        printf ("%d ", b[i]);
}

int main ()
{
    citire ();
    for (int i = n-1; i > -1; i--)
    {
        if (prim (a[i])) 
        {
            b[j] = a[i];
            j++;
        }
    }
    afisare();
    return 0;
}
