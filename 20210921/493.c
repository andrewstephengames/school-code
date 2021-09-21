#include <stdio.h>

int a[201], b[201], n;

int sumcif (int n)
{
    int s = 0;
    while (n)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}

void citire (int a[], int n)
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
}

void det (int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] % sumcif (a[i]); 
        printf ("%d ", b[i]);
    }
}

int main ()
{
    citire (a, n);
    det (a, b, n);
    return 0;
}
