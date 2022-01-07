#include <stdio.h>

int a[1001], n, b[1001], m;

void citire()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
}

int caut (int n)
{
    for (i = 1; i <= m; i++)
        if (b[i] == n) return i;
    return 0;
}

int main ()
{
    citire();
    return 0;
}
