#include <stdio.h>

int a[101], n, svp, spp, nr_10, sd;

void afisarerev (int a[], int n)
{
    for (int i = n; i > 0; i--)
        printf ("%d ", a[i]);
}

void svpf (int a[], int n)
{
    for (int i = 1; i <= n; i++)
        if (a[i]%2 == 0) svp += a[i];
    printf ("\n%d", svp);
}

void sppf (int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0) spp += a[i];
    }
    printf ("\n%d", spp);
}

void nr_10f (int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i]%10 == 0) nr_10++;
    }
    printf ("\n%d", nr_10);
}

void sdf (int a[], int n)
{
    for (int i = 1; i <= n; i++)
        if (a[i]%3 == 0 && i%2 == 1)
            sd += a[i];
    printf ("\n%d", sd);
}

int main ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    afisarerev(a, n);
    svpf(a, n);
    sppf(a, n);
    nr_10f(a, n);
    sdf(a, n);
    return 0;
}
