#include <stdio.h>

int main ()
{
    int n, k, p = 1, c;
    scanf ("%d %d", &n, &k);
    while (n > 0)
    {
        c = n%10;
        if (k > 0)
            if (c%2 == 1)
                p *= c;
        n /= 10;
        k--;
    }
    printf ("%d\n", p);
    return 0;
}
