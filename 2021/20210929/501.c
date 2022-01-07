#include <stdio.h>

int n, a[501], verify;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int main ()
{
    citire ();
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
                verify++;
            i++;
        }
    if (verify == n-1) printf ("DA");
    else printf ("NU");
    return 0;
}
