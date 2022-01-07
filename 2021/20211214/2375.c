#include <stdio.h>

int n, a[1001], k = 0;
FILE *in, *out;

int palCheck (int x)
{
    int og = 0, m = x;
    while (x)
    {
        og = og*10 + x%10;
        x /= 10;
    }
    return og == m;
}

int main ()
{
    in = fopen ("palindromsd.in", "r");
    out = fopen ("palindromsd.out", "w");
    while (fscanf (in, "%d", &n) != EOF)
    {
        k++;
        a[k] = n;
    }
    for (int i = 1; i <= k; i++)
    {
        if (i == k/2 && (k-i+1) == (k/2+1))
        {
            if (palCheck(a[i]))
                fprintf (out, "%d ", a[i]);
            break;
        }
        if (palCheck(a[i]))
            fprintf (out, "%d ", a[i]);
        if (palCheck(a[k-i+1]))
            fprintf (out, "%d ", a[k-i+1]);
    }
    return 0;
}
