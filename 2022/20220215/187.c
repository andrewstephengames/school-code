#include <stdio.h>

int x, f[10], max;

int prim (int nr)
{
    if (nr < 2) return 0;
    if (nr == 2) return 1;
    if (nr%2 == 0) return 0;
    for (int i = 3; i*i <= nr; i++)
        if (nr%i == 0) return 0;
    return 1;
}

int main ()
{
    FILE *in, *out;
    in = fopen ("ciffrecv.in", "r");
    out = fopen ("ciffrecv.out", "w");
    while (fscanf (in, "%d", &x) != EOF)
    {
        f[x]++;
        if (prim (x))
            if (x > max)
                max = x;
    }
    fprintf (out, "%d %d", max, f[max]);
    return 0;
}
