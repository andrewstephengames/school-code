//TODO: find better way of doing things
#include <stdio.h>

int n, a[1001];

void citire ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    int m[1001], aux;
    citire ();
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
        m[i] = i;
        if (a[i] > a[j])
        {
            aux = a[j];
            a[i] = a[j];
            a[j] = aux;
        }
        }
    }
    for (int i = 1; i <= n; i++)
        printf ("%d ", m[i]);
    return 0;
}
