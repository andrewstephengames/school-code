//493.c
#include <stdio.h>

int a[201], b[201], n;

int sumcif ()
{
    int s = 0;
    while (n)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
}

void det ()
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] % sumcif (a[i]); 
        printf ("%d ", b[i]);
    }
}

int main ()
{
    citire ();
    det ();
    return 0;
}
