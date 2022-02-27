//TODO: no output
#include <stdio.h>

int a[101][101], n;

int grad (int i)
{
    int j, s = 0;
    for (j = 1; j <= n; j++)
        s += a[i][j];
    return s;
}

int main ()
{
    FILE *in, *out;
    in = fopen ("grade.in", "r");
    out = fopen ("grade.out", "w");

    int i, x, y;
    for (i = 1; i <= n; i++)
    {
        fscanf (in, "%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for (i = 1; i <= n; i++)
        fprintf (out, "%d ", grad(i));

    fclose (in);
    fclose (out);
    return 0;
}
