#include <stdio.h>

int main ()
{
    int n, x = 0, m = 0, p = 1, cn, c;
    scanf ("%d", &n);
    while (x < 10)
    {
        cn = n;
        while (cn)
        {
            c = cn%10;
            cn /= 10;
            if (c == x)
            {
                m += c*p;
                p *= 10;
            }
        }
        x += 2;
    }
    printf ("\n%d\n", m);
    return 0;
}
