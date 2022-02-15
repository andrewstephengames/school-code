#include <stdio.h>

int n, x, f[100];

int main ()
{
    FILE *in, *out;
    in = fopen ("unice.in", "r");
    out = fopen ("unice.out", "w");
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf (in, "%d", &x);
        f[x]++;
    }
    for (int i = 0; i < 100; i++)
        if (f[i] == 1)
            fprintf (out, "%d ", i);
    return 0;
}
