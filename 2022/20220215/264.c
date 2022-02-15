#include <stdio.h>

int x, max, f[10];

int main ()
{
    FILE *in, *out;
    in = fopen ("maxcif.in", "r");
    out = fopen ("maxcif.out", "w");
    while (fscanf (in, "%d", &x) != EOF)
        f[x]++;
    for (int i = 0; i < 10; i++)
        if (f[i] > max)
            max = f[i];
    for (int i = 0; i < 10; i++)
        if (f[i] == max)
            fprintf (out, "%d ", i);
    return 0;
}
