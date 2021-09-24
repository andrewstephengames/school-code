#include <stdio.h>

int a[1001], n;

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d+=2)
        if (n%d == 0) return 0;
    return 1;
}

void citire ()
{
    scanf ("%d", &n);
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
    citire();
    for (int i = 1; i <= n; i++)
    {
        if (prim(a[i]))
        {
            for (int j = i+1; j <= n; j++)
                a[j-1] = a[j];
            n--, i--;
        }
    }
    afisare();
    return 0;
}
