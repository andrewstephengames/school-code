#include <stdio.h>

int a[1001], n;

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
    int aux;
    citire();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        if (a[i] < a[j])
        {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;
        }
    }
    afisare();
    return 0;
}
