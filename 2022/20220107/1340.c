//TODO: 6936.00 for second test
#include <stdio.h>

struct obiect
{
    int G, V;
} a[1001], tmp;

int main ()
{
    double gmax, castig = 0.0, eff[1001], n;
    scanf ("%lf %lf", &n, &gmax);
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d %d", &a[i].G, &a[i].V);
        eff[i] = 1.0*a[i].V/a[i].G;
    }
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (eff[i] < eff[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                int tmp1 = eff[i];
                eff[i] = eff[j];
                eff[j] = tmp1;
            }
    int i;
    for (i = 1; i <= n && a[i].G <= gmax; i++)
    {
        gmax -= a[i].G;
        castig += a[i].V;
    }
    /*
    while (a[i].G <= gmax && i <= n)
    {
        gmax -= a[i].G;
        castig += gmax*eff[i];
        i++;
    }
    */
    if (gmax > 0 && i <= n)
        castig += gmax*eff[i];
    printf ("%.2lf ", castig);
    return 0;
}
