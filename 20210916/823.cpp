#include <iostream>

int sumcif (int n)
{
    if (n == 0) return 0;
    return (n%10 == 0) + n/10;
}

int main ()
{
    int n;
    scanf("%d", &n);
    printf ("%d", sumcif(n));
    return 0;
}
