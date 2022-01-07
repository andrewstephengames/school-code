#include <stdio.h>

int a[1001], b[1001], n;

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
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    int j = 1, aux;
    citire ();
    for (int i = 1; i <= n; i++)
        if (prim(a[i])) b[j] = a[i], j++;
    for (int i = 1; i < j; i++)
    {
        if (b[i] > b[i+1])
        {
            aux = b[i];
            b[i] = b[i+1];
            b[i+1] = aux;
        }
    }
    for (int i = 1; i <= j; i++)
        printf ("%d ", b[i]);
    return 0;
}
