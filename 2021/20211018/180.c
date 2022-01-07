#include <stdio.h>
#include <limits.h>

int main ()
{
    int n, a[1001], max = INT_MIN, min = INT_MAX, maxp, minp, aux;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i] < min)
        {
            min = a[i];
            minp = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxp = i;
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        if (i <= maxp && i >= minp)
        {
            for (int j = i+1; j < n; j++)
                if (a[i] > a[j])
                {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
        }
        if (i >= maxp && i <= minp)
        {
            for (int j = i+1; j < n; j++)
                if (a[i] > a[j])
                {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
        }
    }
    for (int i = 0; i < n; i++)
        printf ("%d ", a[i]);
    return 0;
}
