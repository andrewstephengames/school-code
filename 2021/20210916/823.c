#include <stdio.h>

int sumcif (int n)
{
    if (n == 0) return 0;
    return n%10+sumcif(n/10);
}

int main ()
{
    int n;
    scanf("%d", &n);
    printf ("%d", sumcif(n));
    return 0;
}
