//TODO
#include <stdio.h>

int sumdiv (int n)
{
    int d, nr = 2;
    if (n == 1) return 1;
    for (d = 2; d*d < n; d++)
        if (n%d == 0) nr += 2;
    if (d*d == n) nr++;
    return nr;
}

int main ()
{
    int n, a[1001], b[1001], aux;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        b[i] = sumdiv (a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
            if (b[i] == b[j])
            {
                if (a[i] < a[j])
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
