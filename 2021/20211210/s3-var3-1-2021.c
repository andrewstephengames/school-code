#include <stdio.h>

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d += 2)
        if (n%d == 0)
            return 0;
    return 1;
}

int suma (int n)
{
    int d = 1, s = 0;
    while (d*d < n)
    {
        if (n%d == 0)
        {
            if (!prim(d))
                s += d;
            if (!prim(n/d))
                s += n/d;
        }
        d++;
    }
    if (d*d == n)
        if (!prim(d))
            s += d;
    return s;
}

int main ()
{
    printf ("\n%d\n", suma (12));
    return 0;
}
