#include <stdio.h>

int putere (int n, int p)
{
    int q, d = 2, ok = 0;
    while (n > 1)
    {   
        q = 0;
        while (n%d == 0)
        {
            q++;
            n /= d;  
        }
        if (q)
        {
            if (d == p)
            {
                ok = 1;
                return q;
            }
        }
        d++;
    }
    if (!ok)
        return -1;
}

int main ()
{
    printf ("%d\n", putere (80, 2));
    return 0;
}
