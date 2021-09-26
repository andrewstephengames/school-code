//FIXME: supposed to print 1 10 13 15 11 7 3,
//       prints 1 10 13 15 7 11 3 instead
#include <stdio.h>

int n, max, maxi, a[1001];

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
    int aux;
    citire ();
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxi = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < maxi)
        {
            if (a[i] > a[i+1])
            {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
            }
        }
        if (i > maxi)
        {
            if (a[i] < a[i+1])
            {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
            }
        }
    }
    afisare ();
    return 0;
}
