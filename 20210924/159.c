#include <stdio.h>

int a[65], n;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[i]);
}

int main ()
{
    citire ();
    for (int i = 1; i <= n; i++)
    {
        if (!a[i]%2)
            for (int j = n; j >= i+1; j--)
                a[j+1] = a[j];
        a[i+1] = 2*a[i];
        n++, i++;
    }
    afisare ();
    return 0;
}
