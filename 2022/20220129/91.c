#include <stdio.h>

void sort (int n, int a[])
{
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main ()
{
    FILE *in, *out;
    in = fopen ("masini.in", "r");
    out = fopen ("masini.out", "w");

    int n, t, a[1001], nr = 0, s = 0;
    fscanf (in, "%d %d", &n, &t);
    for (int i = 1; i <= n; i++)
        fscanf (in, "%d", &a[i]);
    sort(n, a);
    for (int i = 1; i <= n; i++)
    {
        if (s <= t)
        {
            s += a[i];
            nr++;
        }
    }
    fprintf (out, "%d", nr-1);
    fclose (in);
    fclose (out);
    return 0;
}
