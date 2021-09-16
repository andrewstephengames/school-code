#include <stdio.h>

int found;

int prodimp (int n)
{
    int p = 1;
    while (n)
    {
        if (n%2 == 1)
            p *= n%10, found = 1;
        n /= 10;
    }
    if (!found) return -1;
    else return p;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", prodimp(n));
    return 0;
}
