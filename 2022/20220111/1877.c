//TODO
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, a[1001], k, min = 2147483647, minp, s = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i] < min)
        {
            min = a[i];
            minp = i;
        }
    }
    scanf ("%d", &k);
    s += abs(min);
//    printf (" s = %d\n", s);
    int j = 0;
    while (k > 1)
    {
        if (j != minp && a[j] < 0)
        {
            s += a[j];
            printf ("s += %d\n", a[j]);
        }
        k--;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0 && i != minp)
        {
            s += a[i];
            printf ("s += %d\n", a[i]);
        }
    }
    printf ("%d\n", s);
    return 0;
}
