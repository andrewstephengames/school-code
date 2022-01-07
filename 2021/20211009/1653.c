#include <stdio.h>

int ok;

int main ()
{
    int n, a[101], b[101], min = 10000, k;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf ("%d", &b[i]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (a[j] < min && a[j] > a[i])
                min = a[j];
            if (a[j] == min)
            {
                k = a[j]/a[i];
                break;
            }
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (k > 0)
                if (a[i] == a[j]/k)
                {
                   ok++;
                   break;
                }
    if (ok == n-1) printf ("DA");
    else printf ("NU");
    return 0;
}
