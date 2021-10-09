#include <stdio.h>

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d*d < n; d++)
        if (n%d == 0) return 0;
    return 1;
}

int main ()
{
    int n, a[1001], aux;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    }
    for (int i = 0; i < n; i++)
        if (prim (a[i])) printf ("%d ", a[i]);
/*
debugging
        printf ("%d ", a[i]);
*/
    return 0;
}
