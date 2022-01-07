#include <stdio.h>

int ok;

int main ()
{
    int n, a[101];
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 1; i < n-1; i++)
    {
        if (a[i-1]%2 == 0 &&
            a[i+1]%2 == 0 &&
            a[i]%2 == 0)
            ok = 1;      
        if (a[i-1]%2 == 1 &&
            a[i+1]%2 == 1 &&
            a[i]%2 == 1)
            ok = 1;
    }
    if (ok) printf ("DA");
    else printf ("NU");
    return 0;
}
