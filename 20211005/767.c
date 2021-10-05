#include <stdio.h>

int n, m, a[102][102], s;

int main ()
{
    scanf ("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            scanf ("%d", &a[i][j]);
            if (a[i][j]%2 == 0)
                s += a[i][j];
        }
    printf ("%d", s);    
    return 0;
}
