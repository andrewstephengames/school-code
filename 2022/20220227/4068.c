/*TODO: output:
    2
    4 0 
*/
#include <stdio.h>

int a[101][101], n, k, x, y, nr, b[101];

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
    in = fopen ("gradek.in", "r");
    out = fopen ("gradek.out", "w");
    
    int i;
    fscanf (in, "%d %d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        fscanf (in, "%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }
    int l = 1;
    for (i = 1; i <= n; i++)
        if (grad(i) == k)
        {
            b[l] = i;
            l++;
        }
    fprintf (out, "%d\n", l);
    for (i = 1; i <= l; i++)
        fprintf (out, "%d ", b[i]);

    fclose (in);
    fclose (out);
    return 0;
}
