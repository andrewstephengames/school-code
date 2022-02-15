#include <stdio.h>

int n, x, f[101], nr;

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &x);
        f[x]++;
    }
    for (int i = 1; i < 101; i++)
        if (f[i]%2 == 0)
            nr += f[i]/2;
    printf ("%d", nr);
    return 0;
}
