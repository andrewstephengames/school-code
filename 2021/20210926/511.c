//FIXME: find better condition for end of array
#include <stdio.h>

int n, k, a[1001];

void citire ()
{
    scanf ("%d %d", &n, &k);
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
    citire();
    for (int i = 0; i < n; i++)
    {
        if (i <= k)
        {
            if (a[i] > a[i+1])
            {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
            }
        }
        if (n < k)
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
