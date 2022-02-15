#include <stdio.h>

int n, x, s;

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &x);
        while (x)
        {
            s += ((x%10)*(x%10)*(x%10));
            x /= 10;
        }
    }
    printf ("%d", s);
    return 0;
}
