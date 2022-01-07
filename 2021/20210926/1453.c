#include <stdio.h>

int n, a[1001];

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

void afisare ()
{
    for (int i = 0; i < n; i++)
        printf ("%d ", a[i]);
}

int main ()
{
    citire();
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            for (int j = i+1; j < n; j++)
                a[j-1] = a[j];
            n--; i--;
        }
    }
    afisare();
    return 0;
}
