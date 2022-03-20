/*TODO: output:
    3 2 5 0
*/
#include <stdio.h>

int n, a[101][101], x, y, b[101];

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
    in = fopen ("izolate.in", "r");
    out = fopen ("izolate.out", "w");

    int i;
    fscanf (in, "%d", &n);
    for (i = 1; i <= n; i++)
    {
        fscanf (in, "%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }
    x = 1;
    for (i = 1; i <= n; i++)
    {
        if (grad(i) == 0)
        {
            b[x] = i;
            x++;
        }
    }
    fprintf (out, "%d ", x);
    for (i = 1; i <= x; i++)
        fprintf (out, "%d ", b[i]);

    fclose (in);
    fclose (out);
    return 0;
}
