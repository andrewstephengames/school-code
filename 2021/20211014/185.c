//FIXME
#include <stdio.h>

int prima (int n)
{
    while (n > 10) n /= 10;
    return n;
}

int main ()
{
    int n, a[1000], b[1000], aux;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        b[i] = prima(a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf ("%d", b[i]);
    return 0;
}
