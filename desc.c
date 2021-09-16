#include <stdio.h>

//desc in factori primi ai nr n
void descprim (int n)
{
    int d = 2, p;
    while (n != 1)
    {
        p = 0;
        while (n%d == 0)
        {
            n/=d;
            p++;
        }
        if (p) printf ("%d^%d\n", d, p);
        d++;
    } 
}

int main ()
{
    int n;
    scanf ("%d", &n);
    descprim(n);
    return 0;
}
