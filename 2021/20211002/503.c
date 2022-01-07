//FIXME
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
        if (i == 0)
            if (a[i+1] == 0)
                verify++;
        else if (a[i-1] == 0 ||
                a[i+1] == 0)
                verify++;
    }
    if (verify == n-1) printf ("DA");
    else printf ("NU");
    return 0;
}
