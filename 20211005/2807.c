//TODO: min value for last row is 9 instead of 1
#include <stdio.h>

int n, m, a[52][52];

void citire ()
{
    scanf ("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf ("%d", &a[i][j]);
}

void afisare ()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf ("%d ", a[i][j]);
        printf ("\n");
    }
}

int main ()
{
    int minp = 10001, minu = 10001, jp, ju, inter;
    citire ();
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] < minp)
        {
            minp = a[i][0];
            jp = i;
        }
        if (a[i][n] < minu)
        {
            minu = a[i][m-1];
            ju = i;
        }
    }
    inter = a[jp][0];
    a[jp][0] = a[ju][m-1];
    a[ju][m-1] = inter;
    afisare ();
    return 0;
}
