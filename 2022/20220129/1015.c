#include <stdio.h>

int suma (int a[], int st, int dr)
{
    if (st == dr)
        return a[st];
    else
    {
        int m = (st+dr)/2;
        int x = suma (a, st, m);
        int y = suma (a, m+1, dr);
        return x+y;
    }
}

int main ()
{
    int n, a[1001];
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    printf ("%d", suma (a, 1, n));
    return 0;
}
