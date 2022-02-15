#include <stdio.h>

int x, f[10], nr;

int main ()
{
    FILE *in, *out;
    in = fopen ("cifreord1.in", "r");
    out = fopen ("cifreord1.out", "w");
    while (fscanf (in, "%d", &x) != EOF)
        while (x)
        {
            f[x%10]++;
            x /= 10;
        }
    for (int i = 9; i > -1; i--)
        if (f[i] > 0)
            for (int j = 1; j <= f[i]; j++)
            {
                if (nr == 20)
                {
                    fprintf (out, "\n");
                    nr = 0;
                }
                else fprintf (out, "%d ", i);
                nr++;
            }
    return 0;
}
