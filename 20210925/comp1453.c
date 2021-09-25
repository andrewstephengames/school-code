#include <stdio.h>

int a[1001], n;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

void afisare()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[i]);
}

int main ()
{
    citire ();
    for (int i = n; i >= 1; i--)
    {
        if (!a[i]%2)
        {
            for (int j = i; j < n; j++)
                a[j] = a[j+1];
            n--; i--;
        }
    }
    afisare();
    return 0;
}
