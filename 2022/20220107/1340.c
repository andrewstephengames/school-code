//TODO: 6936.00 for second test
#include <stdio.h>

struct obiect
{
    int G, V;
} a[1001], tmp;

int main ()
{
    int n;
    float gmax, castig = 0.0, eff[1001];
    scanf ("%d %f", &n, &gmax);
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d %d", &a[i].G, &a[i].V);
        eff[i] = a[i].V/a[i].G;
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
    printf ("%.2f ", castig);
    return 0;
}
