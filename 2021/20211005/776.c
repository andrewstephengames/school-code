//TODO: outputs 0 instead of 2
#include <stdio.h>

int n, m, nr, a[102][102];

void citire ()
{
    scanf ("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf ("%d", &a[i][j]);
}

int main ()
{
    int verify;
    citire ();
    for (int i = 0; i < n; i++)
    {
        verify = 0;
        for (int j = 0; j < m; j++)
            if (a[i][j] != a[i][j+1]) 
            {
                verify = 1;
//                printf ("%d != %d\n", a[i][j], a[i][j+1]);
            }
        if (verify == 0) nr++;
    }
    printf ("%d", nr);
    return 0;
}
