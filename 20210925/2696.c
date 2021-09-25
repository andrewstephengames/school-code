//TODO: only gives 80 points
#include <stdio.h>

int a, b, np, ni;

int par (int a, int b)
{
    if (!a%2 && !b%2) return 1;
    if (a%2 && b%2) return 1;
    return 0;
}

int main ()
{
    scanf ("%d %d", &a, &b);
    if (par(a,b))
    {
        if (!a%10%2) np++;
        if (!a/10%10%2) np++;
        if (!b%10%2) np++;
        if (!b/10%10%2) np++;
        printf ("%d", np);
    }
    else
    {
        if (a%10%2) ni++;
        if (a/10%10%2) ni++;
        if (b%10%2) ni++;
        if (b/10%10%2) ni++;
        printf ("%d", ni);
    }
    return 0;
}
