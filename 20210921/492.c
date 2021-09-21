#include <stdio.h>

int n, a[201], c;

void citire (int a[], int n)
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

void primf (int a[], int n)
{
    int r, x, y;
    for (int i = 0; i < n/2; i++)
    {
        x = a[i], y = a[n-i];
        do
        {
            r = x%y;
            x = y;
            y = r;
        } while (r);
    }
    if (x) c++;
}

int main ()
{
    citire (a, n);
    primf (a, n);
    printf ("%d", c);
    return 0;
}
