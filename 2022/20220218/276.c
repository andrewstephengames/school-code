#include <stdio.h>

int x, f[100];

int main ()
{
    FILE *in, *out;
    in = fopen ("pareimpare.in", "r");
    out = fopen ("pareimpare.out", "w");

    while (fscanf (in, "%d", &x) != EOF) 
        f[x]++;
    for (int i = 1; i < 100; i += 2)
        if (f[i] > 0)
            fprintf (out, "%d ", i);
    fprintf (out, "\n");
    for (int i = 98; i > -1; i -= 2)
        if (f[i] > 0)
            fprintf (out, "%d ", i);

    fclose (in);
    fclose (out);
    return 0;
}
