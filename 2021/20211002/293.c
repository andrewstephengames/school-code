//TODO: 60 points
#include <stdio.h>

int n, a[101], verify;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0;  i < n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    citire ();
    for (int i = 0; i < n-1; i++)
        if (a[i] == a[i+1]) verify = 1;
    if (verify) printf ("NU");
    else printf ("DA");
    return 0;
}
