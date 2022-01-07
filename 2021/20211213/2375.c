#include <stdio.h>

int n, a[1001], k = 0;
FILE *in, *out;

int main ()
{
    in = fopen ("palindromsd.in", "r");
    out = fopen ("palindromsd.out", "w");
    while (fscanf (in, "%d", &n))
    {
        k++;
        a[k] = n;
    }
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[n+1-i]);
    return 0;
}
