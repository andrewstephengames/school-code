#include <stdio.h>

int f[200001], x, nr;

int main ()
{
    while (scanf ("%d", &x))
        f[x]++;
    for (int i = 0; i < 200000; i++)
        if (f[i] == 1)
            nr++;
    printf ("%d", nr);
    return 0;
}
