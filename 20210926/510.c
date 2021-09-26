//FIXME: outputs 0 0 3 7 11 instead of 3 7 11 13
#include <stdio.h>
#include <math.h>

int n, a[1001], b[1001];
int prim (int n)
{
    if (n < 2) return 0;
    else if (n%2 == 0 && n != 2) return 0;
    if (n == 2 || (n%2 == 1 && n < 9)) return 1;
    for (int d = 9; d < sqrt(n); d += 2)
        if (n%2 == 0) return 0;
    return 1;
}

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    int m = 0, aux;
    citire ();
    for (int i = 0; i < n; i++)
    {
        if (prim(a[i]))
        {
            b[m] = a[i];
            m++;
        }
    }
    for (int i = 0; i < n-1; i++)
    for (int j = i+1; j < n; j++)
    {
        if (b[i] > b[j])
        {
            aux = b[i];
            b[i] = b[j];
            b[j] = aux;
        }
    }
    for (int i = 0; i < m; i++)
        printf ("%d ", b[i]);
    return 0;
}
