#include <stdio.h>

int n, a[101], nr = 0;

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d++)
        if (n%d == 0)
           return 0;
    return 1;
}

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        nr += prim (a[i]);
    }
    printf ("%d\n", nr);
    return 0;
}
