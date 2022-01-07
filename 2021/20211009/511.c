#include <stdio.h>

int main ()
{
    int n, k, a[1001], aux;
    scanf ("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < k-1; i++)
    {
        for (int j = i+1; j < k; j++)
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    }
    for (int i = k; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] < a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    for (int i = 0; i < n; i++)
        printf ("%d ", a[i]);
    return 0;
}
