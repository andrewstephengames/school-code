#include <stdio.h>

int n, m, a[101][101], x, y, e1[101], e2[101];

int main ()
{
    FILE *in, *out;
    int i, j;
    in = fopen ("adiacenta.in", "r");
    out = fopen ("adiacenta.out", "w");

    fscanf (in, "%d %d", &n, &m);
    for (i = 1; i <= m; i++)
        fscanf (in, "%d %d", &e1[i], &e2[i]);
    for (i = 1; i <= m; i++)
    {
        a[e1[i]][e2[i]] = 1;
        a[e2[i]][e1[i]] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            fprintf (out, "%d ", a[i][j]);
        fprintf (out, "\n");
    }

    fclose (in);
    fclose (out);
    return 0;
}
