//TODO: only fills primary diagonal
#include <stdio.h>

int n, a[52][52];

int main ()
{
    int k = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
              if ((i == k && j >= k) ||
                  (j == k && i >= k) ||
                  (i == k && j == k) ||
                  (i >= k && j >= k))
                  a[i][j] = k+1;
              i++, j++;
            }
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf ("%d ", a[i][j]);
        printf ("\n");
    }
    return 0;
}
