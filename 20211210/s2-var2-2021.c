#include <stdio.h>

int main ()
{
    int n, s = 1, c1, c2;
    scanf ("%d", &n);
    c1 = n%10;
    n /= 10;
    c2 = n%10;
    if (c1 == c2) s = 0;
    else if (c1 < c2) s = -1;
    while ( (c1-c2)*s > 0 && n > 9 )
    {
        c1 = n%10;
        n /= 10;
        c2 = n%10;
    }
    printf ("%d %d", s, n);
    return 0;
}
