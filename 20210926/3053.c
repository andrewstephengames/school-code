#include <stdio.h>
#include <string.h>

FILE *in, *out;

char n[1001];

int main ()
{
    in = fopen ("evenoddxxl.in", "r");
    out = fopen ("evenoddxxl.out", "w");
    fscanf (in, "%s", &n);
    if (n[strlen(n)-1]%2) fprintf(out, "Impar");
    else fprintf (out, "Par");
    return 0;
}
