#include <stdio.h>

int n, a[1000001], s[1000001], nr;

int main ()
{

    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d", &a[i]);
        printf ("%d ", a[i]*a[i]*(a[i]+1)/2);
    }
    return 0;
}
