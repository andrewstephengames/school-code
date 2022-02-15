#include <stdio.h>

int x, f[1000], nr, ok;

int main ()
{
    FILE *in, *out;
    in = fopen ("nrlipsa.in", "r");
    out = fopen ("nrlipsa.out", "w");
    while (fscanf (in, "%d", &x) != EOF)
        if (x < 1000)
            f[x]++;
    for (int i = 999; i > 99; i--)
    {
        if (f[i] == 0)
        {
            fprintf (out, "%d ", i);
            ok = 1;
        }
        if (nr == 2)
            break;
        nr++;
    }
    if (!ok) fprintf (out, "NU");
    return 0;
}
