#include <stdio.h>

int n, a[1001], b[1001];

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int primU (int a, int b)
{
    while (b != a)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return (a == 1);
}

int main ()
{
    int aux, j = 0;;
    citire ();
    for (int i = 0; i < n; i++)
    {
        if (primU (a[i], a[n-1]))
        {
            b[j] = a[i];
            j++;
        }
    }

    for (int i = 0; i < j-1; i++)
        for (int k = i+1; k < j; k++)
        if (b[i] < b[k])
        {
            aux = b[i];
            b[i] = b[k];
            b[k] = aux;
        }

    for (int i = 0; i < j; i++)
        printf ("%d ", b[i]);
    return 0;
}
