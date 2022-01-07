#include <stdio.h>

int a[201], n, nr;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

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
    citire ();
    for (int i = 0; i < n; i++)
        if (cmmdc (a[i], a[n-1]) == 1)
            nr++;
    printf ("%d", nr);
    return 0;
}
