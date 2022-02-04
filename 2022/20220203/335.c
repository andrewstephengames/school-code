#include <stdio.h>
#include <math.h>

int main ()
{
    int n, s = 0;
    scanf ("%d", &n);
    for (int i = 1; i < n; i++)
        if (i%2 == 0)
            s += i*(i+1);
        else
            s -= i*(i+1);
    printf ("Rezultatul este %d", s);
    return 0;
}
