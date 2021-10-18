#include <stdio.h>
#include <math.h>

int pp (int n)
{
    return (int) (sqrt(n)) == (float) (sqrt(n));
}

int main ()
{
    int n, a[1001], aux;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n-1; i++)
    {
        if (pp(a[i]))
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
