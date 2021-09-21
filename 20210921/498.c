#include <stdio.h>

int a[201], n, nr;

void citire (int a[], int n)
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

void primf (int a[], int n)

    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            int x = a[i], y = a[j], r;
            if (y == 0) y = x;
            else
            while (x%y != 0)
            {
                r = x%y;
                x = y;
                y = r;
            }
            if (y) nr++;
        }
}

int main ()
{
    citire (a, n);
    primf (a, n);
    printf ("%d", nr);
    return 0;
}
