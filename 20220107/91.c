//TODO
#include <stdio.h>

int main ()
{
    FILE *in = fopen ("masini.in", "r");
    FILE *out = fopen ("masini.out", "w");
    int n, T, a[1001], nr = 0;
    fscanf (in, "%d %d", &n, &T);
    for (int i = 0; i < n; i++)
        fscanf (in, "%d", &a[i]);
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    for (int i = 0; i < n && a[i] <= T; i++)
    {
        T -= a[i];
        nr++;
    }
    return 0;
}
