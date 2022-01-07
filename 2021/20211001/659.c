//TODO
#include <stdio.h>

int n, m, a[102][102], sum, max = -1, nr;

void citire ()
{
    scanf ("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf ("%d", &a[i][j]);
}

int maxf (int a[][0])
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (a[i][j] > max)
            max = a[i][j];
        j++;
    }    
}

int main ()
{
    citire ();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == max)
                sum += a[i][j] - max;
            else sum += a[i][j];
        }
        printf ("%d ", sum);
    }
    return 0;
}
