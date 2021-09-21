#include <stdio.h>

int n = 6, a[201], nr;

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
        scanf ("%d", &a[i]);
}

void det (int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
        {
            if (sumcif(a[i]) == sumcif(a[j]))
                nr++;
        }
}

int main ()
{
    citire (a, n);
    det (a, n);
    printf ("%d", nr);
    return 0;
}
