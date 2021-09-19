#include <stdio.h>

int svp, spp, nrd, snr;

void afisareds (int a[], int n)
{
    for (int i = n-1; i > -1; i--)
    {
        printf ("%d ", a[i]);
        if (a[i]%2 == 0) svp+=a[i];
    }
    printf ("\n%d", svp);
}

void sppf (int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (i%2 == 0) spp++;
    printf ("\n%d", spp);
}

void nrdf (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]%10 == 0) nrd++;
        if (a[i]%3 == 0 && i%2 == 1)
            snr += a[i];
    }
    printf ("\n%d\n%d", nrd, snr);
}

void citire (int a[], int n)
{
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    int a[101], n;
    citire(a, n);
    afisareds(a, n);   
    sppf (a, n);
    nrdf (a, n);
    return 0;
}
