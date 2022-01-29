#include <stdio.h>
#include <math.h>

int main ()
{
    int n, k, s = 0;
    scanf ("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        s += pow (i, k);
    printf ("%d", s%1000000007);
    return 0;
}
