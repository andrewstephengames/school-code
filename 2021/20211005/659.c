#include <stdio.h>

int n, m, a[102][102];

void citire ()
{
    scanf ("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf ("%d", &a[i][j]);
}

int main ()
{
    int maxl, sum;
    citire ();
    for (int i = 0; i < n; i++)
    {
        sum = 0; maxl = a[i][0];
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > maxl) maxl = a[i][j];
        }
        for (int j = 0; j < m; j++)
            sum += a[i][j];
        sum -= maxl;
        printf ("%d ", sum);
    }
    return 0;
}
