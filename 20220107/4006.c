#include <stdio.h>

int main ()
{
    int n, a, b, nr = 0;
    scanf ("%d %d %d", &n, &a, &b);
    while (n%a != 0)
    {
        n -= b;
        nr++;
    }
    n /= a;
    for (int i = 1; i <= n; i++)
        printf ("%d ", a);
    for (int i = 1; i <= nr; i++)
        printf ("%d ", b);
    return 0;
}
