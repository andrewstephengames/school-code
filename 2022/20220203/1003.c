#include <stdio.h>

int f[1000000], x, a[1000000], nr;

int main ()
{
    FILE *in, *out;
    in = fopen ("numere8.in", "r");
    out = fopen ("numere8.out", "w");

    while (fscanf (in, "%d", &x) != EOF)
    {
        a[nr] = x;
        f[a[nr]]++;
        nr++;
    }
    for (int i = 9999; i > 0; i--)
        if (f[i] == 0)
            fprintf (out, "%d ", i);

    fclose (in);
    fclose (out);
    return 0;
}
