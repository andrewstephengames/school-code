#include <stdio.h>

int cifmax (int n)
{
    int max = -1;
    if (n == 0) return 0;
    while (n)
    {
        if (n%10 > max) max = n%10;
        n/=10;
    }
    return max;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", cifmax(n));
    return 0;
}
