#include <stdio.h>

int main ()
{
    int n, x = 1, m = 0, p = 1, cn, c;
    scanf ("%d", &n);
    while (x < 10)
    {
        cn = n;
        while (cn != 0)
        {
            c = cn%10;
            cn /= 10;
            if (c == x)
            {
                m = c*p+m;
                p *= 10;
            }
        }
        x += 2;
    }
    printf ("%d\n", m);
    return 0;
}
