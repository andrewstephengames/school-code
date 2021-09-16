#include <stdio.h>

int cmmdc (int a, int b)
{
    int r;
    do {
        r = a%b;
        a = b;
        b = r;
    } while (r);
    return a;
}

int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    cmmdc (a, b);
    printf ("%d", a);
    return 0;
}
