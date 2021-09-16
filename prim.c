#include <stdio.h>
#include <math.h>

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d <= n/2; d++)
        if (n%d == 0) return 0;
    return 1;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", prim (n));
    return 0;
}
