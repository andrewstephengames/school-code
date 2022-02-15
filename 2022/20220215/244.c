#include <stdio.h>

int n, x, f[10], nr;

int main ()
{
    FILE *in, *out;
    in = fopen ("cifreord.in", "r");
    out = fopen ("cifreord.out", "w");
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf (in, "%d", &x);
        f[x]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (f[i] > 0)
        {
            for (int j = 1; j <= f[i]; j++)
            {
                if (nr == 19)
                {
                    fprintf (out, "\n");
                    nr = 0;
                }
                else fprintf (out, "%d ", i);
                nr++;
            }
        } 
    }
    return 0;
}
