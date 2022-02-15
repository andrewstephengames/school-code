#include <stdio.h>

int n, x, f[10];

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &x);
        while (x)
        {
            f[x%10]++;
            x /= 10;
        }
    }
    for (int i = 1; i < 10; i++)
        if (f[i] > 0)
            printf ("%d ", i); 
    return 0;
}
