#include <stdio.h>

int n, a[52][52];

int main ()
{
    int i, j;
    scanf ("%d", &n);
    for (i = 1; i <= n/2; i++) // numar chenarele
    {
        for (j = i; j <= n+1-i; j++)
        {
            a[i][j] = i;
            a[n+1-i][j] = i;
        }
        for (j = i+1; j <= n-i; j++)
        {
            a[j][i] = i;
            a[j][n+1-i] = i;
        }
    }
    if (n%2 == 1) a[n/2+1][n/2+1] = n/2+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf ("%d ", a[i][j]);
        printf ("\n");
    }
    return 0;
}
