#include <stdio.h>

FILE *in, *out;

int nrdiv (int n)
{
    int nr = 0;
    for (int d = 1; d*d < n; d++)
        if (n%d == 0) nr += 2;
    return nr;
}

int main ()
{
    in = fopen ("sortare_divizori.in", "r");
    out = fopen ("sortare_divizori.out", "w");
    int n, a[1001], b[1001], aux;
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf (in, "%d", &a[i]);
        b[i] = nrdiv(a[i]);
    }
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (b[i] < b[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
            /*
            if (b[i] == b[j])
            {
                if (a[i] > a[j])
                {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
            }
            */
        }
    for (int i = 0; i < n; i++)
    {
        fprintf (out, "%d\n", a[i]);
    }
    return 0;
}
