#include <stdio.h>

int found;

int prod_k (int n, int k)
{
    if (n == 0 && k == 0) return 0;
    if (n == 0 && k != n) p = 0, found = 1;
    int p = 1;
    while (n)
    {
        if (k != n%10)
            p *= n%10, found = 1;
        n /= 10;
    }
    if (!found) return 0;
    return p;
}

int main ()
{
    int n, k;
    scanf ("%d %d", &n, &k);
    printf("%d", prod_k (n, k));
    return 0;
}
