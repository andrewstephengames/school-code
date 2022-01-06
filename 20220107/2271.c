#include <stdio.h>

int main ()
{
    long long int n, a[100001], min, min1, max, max1;
    scanf ("%lld %lld", &n, &a[1]);
    min = a[1];
    min1 = a[1];
    max = a[1];
    max1 = a[1];
    for (int i = 2; i <= n; i++)
    {
        scanf ("%lld", &a[i]);
        if (a[i] < min)
        {
            min1 = min;
            min = a[i];
        }
        else if (a[i] < min1)
            min1 = a[i];
        if (a[i] > max)
        {
            max1 = max;
            max = a[i];
        }
        else if (a[i] > max1)
            max1 = a[i];
    }
    if (min*min1 > max*max1)
        printf ("%lld\n", min*min1);
    else printf ("%lld\n", max*max1);
    return 0;
}
