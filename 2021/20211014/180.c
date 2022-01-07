//TODO
#include <stdio.h>

int main ()
{
    int n, a[1001], min = 1000001, max = -1, x, y, aux;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i] > max) max = a[i], x = i;
        if (a[i] < min) min = a[i], y = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= y && a[i] <= x)
        {
            for (int j = i+1; j <= x; j++)
            {
                if (a[i] > a[j])
                {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf ("%d ", a[i]);
    return 0;
}
