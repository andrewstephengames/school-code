#include <iostream>

void sumcif (int n, int &s)
{
    if (n == 0) s = 0;
    else
    {
        sumcif (n/10, s);
        s += n%10;
    }
}

int main ()
{
    int n, s;
    scanf ("%d", &n);
    sumcif (n, s);
    printf ("%d", s);
    return 0;
}
