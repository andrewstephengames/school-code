//TODO: dumbest thing ever done
#include <stdio.h>

int main ()
{
    int n, p = 10;
    scanf ("%d", &n);
    while (n/p == 0)
        p *= 10;
    printf ("%d", n/p/10);
    return 0;
}
