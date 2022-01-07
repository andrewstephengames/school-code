#include <stdio.h>
#include <limits.h>

FILE *in, *out;

int nrdiv (int n)
{
    int nr = 0, d = 1;
    while (d*d < n)
    {
        if (n%d == 0)
            nr += 2;
        d++;
    }
    if (d*d == n)
        nr++;
    return nr;
}

int main ()
{
/*
debugging
    printf ("%d\n", nrdiv(12));
    return 0;
*/
    int aux;
    in = fopen ("sortare_divizori.in", "r");
    out = fopen ("sortare_divizori.out", "w");
    int n, a[1001];
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
        fscanf (in, "%d", &a[i]);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nrdiv(a[i]) < nrdiv(a[j]))
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
            if (nrdiv(a[i]) == nrdiv(a[j]))
                if (a[i] < a[j])
                {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
        }
/*
debugging
        printf ("%d\n", a[i]);
*/
    }
    for (int i = 0; i < n; i++)
        fprintf (out, "%d ", a[i]);
    return 0;
}
