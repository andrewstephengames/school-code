#include <stdio.h>

int n, a[1001];

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int palindrom ()
{
    int ok = 0;
    for (int i = 0; i < n; i++)
        for (int j = n-1; j > -1; j--)
        {
            if (a[i] == a[j]) ok++;
            i++;
        }
    return (ok == n);
}

int main ()
{
    citire ();
    for (int i = 0; i < n; i++)
        printf ("%d", a[i]);
    if (palindrom ()) printf ("\nDA");
    else printf ("\nNU");
    return 0;
}
