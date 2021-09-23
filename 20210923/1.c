#include <stdio.h>

int a, b;

FILE *sumin, *sumout;

int main ()
{
    int a, b;
    sumin = fopen("sum.in", "r");
    fscanf (sumin, "%d %d", &a, &b);
    sumout = fopen("sum.out", "w");
    fprintf (sumout, "%d", a+b);
    fclose(sumin);
    fclose(sumout);
    return 0;
}
