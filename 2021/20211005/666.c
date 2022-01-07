#include <stdio.h>

int n, m, a[102][102], nr;

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d+=2)
        if (n%d == 0) return 0;
    return 1;
}

void citire ()
{
    scanf ("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf ("%d", &a[i][j]);
}

int main ()
{
    citire ();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (i%2 == 0)
            {
                if (prim(a[i][j]))
                {
                    nr++;
                }
            }
        }
    printf ("%d", nr);
    return 0;
}
