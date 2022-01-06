//TODO: segfault sort
#include <stdio.h>

struct Obiect
{
    int G, V;
};

int main ()
{
    int n, tmp1;
    float eff[1001], castig = 0.0, gmax, tmp2;
    struct Obiect a[2002];
    scanf ("%d %f", &n, &gmax);
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d %d", &a[i].G, &a[i].V);
        eff[i] = a[i].V/a[i].G;
    }
    /*
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; i++)
            if (eff[i] > eff[j])
            {
                tmp1 = a[i].G;
                a[i].G = a[j].G;
                a[j].G = tmp1;
                tmp1 = a[i].V;
                a[i].V = a[j].V;
                a[j].V = tmp1;
                tmp2 = eff[i];
                eff[i] = eff[j];
                eff[j] = tmp2;
            }
    */
    for (int i = 1; i <= n; i++)
    {
        int p = i;
        while (p > 0 && eff[p] < eff[p-1])
        {
                tmp1 = a[p].G;
                a[p].G = a[p-1].G;
                a[p-1].G = tmp1;
                tmp1 = a[p].V;
                a[p].V = a[p-1].V;
                a[p-1].V = tmp1;
                tmp2 = eff[p];
                eff[p] = eff[p-1];
                eff[p-1] = tmp2;
        }
    }
    int i = 1;
    while (a[i].G <= gmax && i <= n)
    {
        gmax -= a[i].G;
        castig += a[i].V;
        if (gmax > 0 && i <= n)
            castig += gmax*eff[i];
        i++;
    }
    printf ("%.0f\n", castig);
    return 0;
}
