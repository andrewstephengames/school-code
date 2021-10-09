#include <stdio.h>

int n, a[101], ok;

int oglindit (int n)
{
    int og = 0;
    while (n)
    {
        og = og*10+n%10;
        n /= 10;
    }
    return og;
}

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
        if (a[i] == oglindit (a[0]))
            ok = 1;
    if (ok) printf ("DA");
    else printf ("NU");
    return 0;
}
