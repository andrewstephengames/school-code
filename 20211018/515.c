#include <stdio.h>

int min (int a, int b)
{
    if (a < b) return a;
    return b;
}

int sumdiv (int n)
{
    int d = 1, s = 0;
    while (d*d < n)
    {
        if (n%d == 0)
            s += n/d + d;
        d++;
    }
    if (d*d == n)
        s += d;
    return s;
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
