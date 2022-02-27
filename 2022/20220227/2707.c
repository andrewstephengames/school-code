#include <stdio.h>

int n, a[101][101], b[101][101];

int grad (int i)
{
    int s = 0, j;
    for (j = 1; j <= n; j++)
        s += a[i][j];
    return s;
}

int main ()
{
    int ok = 1, i, j;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf ("%d", &a[i][j]);
    for (i = 1; i <= n; i++)
        if (grad(i) == 0)
            ok = 0;
    printf ("%d", ok);
    return 0;
}
