//cmmdc=1
#include <stdio.h>

int x[10];

int nrcif (int n)
{
    int nr = 0;
    while (n)
    {
        x[nr] = n%10;
        nr++;
        n /= 10;
    }
    return nr;
}

int cmmdc (int a, int b)
{
    while (a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int ogl (int n)
{
    int og = 0;
    while (n)
    {
        og = og*10+n%10;
        n /= 10;
    }
    return og;
}

int main ()
{
    int n, a = 0, b = 0, nr;
    scanf ("%d", &n);
    nr = nrcif(n);
    for (int i = 0; i < nr/2; i++)
        a = a*10+x[i];
    for (int i = nr/2-1; i < nr; i++)
        b = b*10+x[i];
    printf ("%d\n", cmmdc (ogl(a), ogl(b)));
    return 0;
}
