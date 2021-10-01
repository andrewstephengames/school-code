#include <stdio.h>

int n, a[101], verify = 1;

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
        if (a[i]%a[n-1] != 0) verify = 0;
    if (verify) printf ("DA");
    else printf ("NU");
    return 0;
}
