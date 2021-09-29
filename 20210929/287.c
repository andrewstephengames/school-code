//TODO: no desired output ("0 " instead of "0 1 1")
#include <stdio.h>

int n, m, a[501], verify;

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        verify = 0;
        scanf ("%d", &m);
        for (int j = 0; j < m; j++)
        {
            scanf ("%d", &a[i]);
        }
        for (int j = 0; j < m-1; j++)
            for (int k = j+1; k < m; k++)
            {
                if (a[j] <= a[k]) verify++;
                j++;
            }
        if (verify == m-1) printf ("1 ");
        else printf ("0 ");
    }
    return 0;
}
