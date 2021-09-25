#include <stdio.h>

int a[1001], b[1001], n, nr;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &b[i]);
}

int main ()
{
    citire ();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n ; j++)
        {
            if (a[i] == b[j]) nr++, b[j] = -1;
        }
    if (nr == n) printf ("DA");
    else printf ("NU");
    return 0;
}
