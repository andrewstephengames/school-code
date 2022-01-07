#include <stdio.h>
#include <limits.h>

int main ()
{
    int n, a[1001], max = -1, maxi, aux;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i] > max) 
        {
            max = a[i];
            maxi = i;
        }
    }
    for (int i = 0; i < maxi-1; i++)
    {
        for (int j = i+1; j < maxi; j++)
        {
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    for (int i = maxi+1; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    for (int i = 0; i < n; i++)
        printf ("%d ", a[i]);
    return 0;
}
