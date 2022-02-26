#include <stdio.h>

int n, m, a[101][101], x, y, e1[101], e2[101];

int main ()
{
    FILE *in, *out;
    int i = 1, j = 1, nr = 1;
    in = fopen ("adiacenta1.in", "r");
    out = fopen ("adiacenta1.out", "w");

    while (fscanf (in, "%d %d", &x, &y) != EOF)
    {
        e1[i] = x;
        e2[i] = y;
        a[e1[i]][e2[i]] = 1;
        a[e2[i]][e1[i]] = 1;
        i++;
        if (i%2 == 0)
            nr++;
    }
    for (i = 1; i <= nr; i++)
    {
        for (j = 1; j <= nr; j++)
            fprintf (out, "%d ", a[i][j]);
        fprintf (out, "\n");
    }

    fclose (in);
    fclose (out);
    return 0;
}
