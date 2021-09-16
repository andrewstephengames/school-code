/*
Se citeste un sir cu n elemente nr intregi. Sa se verifice cate dintre nrle din sir sunt prime cu ultimul element.
ex: a[] = { 15, 22, 17, 75, 3 }
> 2
*/

#include <stdio.h>

int nr;

int cmmdc (int a, int b)
{
    int r;
    do
    {
        r = a%b;
        a = b;
        b = r;
    } while (r);
    return a;
}

int main ()
{
    int a[101], n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (cmmdc (a[i], a[n-1]) == 1)
//            printf ("%d\n", cmmdc(a[i], a[n-1]));
            nr++;
    }
    printf ("%d", nr);
    return 0;
}
