#include <stdio.h>

int n, f[500001], a[500001], ok, nr[10], k;

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        f[a[i]]++;
    }
    for (int i = 999; i > 100; i--)
    {
        if (f[i] == 0)
        {
            nr[k] = i;
            ok = 0;
            if (k > 1)
                break;
            k++;
            continue;
        }
        else ok = 1;
    }
    if (ok)
        printf ("NU EXISTA");
    else printf ("%d %d", nr[1], nr[0]);
    return 0;
}
