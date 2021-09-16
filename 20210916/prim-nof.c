#include <stdio.h>

int main ()
{
    int a, d, prim = 1;
    scanf ("%d", &a);
    if (a < 2) prim = 0;
    if (a%2 == 0 && a != 2) prim = 0;
    for (int d = 3; d*d <= a; d++)
        if (a%d == 0) prim = 0;
    printf ("%d", prim);
    return 0;
}
