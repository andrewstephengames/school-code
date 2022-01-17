#include <stdio.h>

int main ()
{
    FILE *in, *out;
    in = fopen ("eureni.in", "r");
    out = fopen ("eureni.out", "w");

    int s, n, e;
    fscanf (in, "%d %d %d", &s, &n, &e);
    return 0;
}
