//TODO
#include <stdio.h>

int suma (int a[], int st, int dr)
{
    if (st == dr)
        return a[st]%2 == 1;
    else
    {
        int m = (st+dr)/2;
        int x = suma (a, st, m);
        int y = suma (a, m+1, dr);
        if (a[m]%2 == 1)
            return 1;
        else return (x%2 == 1) + (y%2 == 1);
    }
}

int main ()
{
    int n, a[101];
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    if (!suma(a, 1, n))
        printf ("NU");
    else printf ("DA");
    return 0;
}
