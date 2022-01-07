#include <stdio.h>

int cmmdc (int a, int b)
{
    int r;
    do
    {
        r = a%b;
        a=b;
        b=r;
    } while (r);
    return a;
}

int cmmdc_r (int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a-b;
        else b = b-a;
    return a;
    }
}

int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d", cmmdc (a, b));
    return 0;
}
