#include <stdio.h>

int n, a[1001], verify;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    citire ();
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[0] && a[i] <= a[n-1])
        {
            verify++;
        }
        if (a[i] <= a[0] && a[i] >= a[n-1])
        {
            verify++;
        }
    }
    if (verify == n) printf ("DA");
    else printf ("NU");
    return 0;
}
