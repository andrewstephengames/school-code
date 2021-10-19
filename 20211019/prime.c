#include <stdio.h>

int prime (int a, int b)
{
    int r;
    do
    {
        r = a%b;
        a = b;
        b = r;
    } while (r);
    return (a == 1);
}

int main ()
{
    int n, a[15], nr = 0;;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
        if (prime (a[i], a[n-1]))
            nr++;
    printf ("%d\n", nr);
    return 0;
}
