//TODO
#include <stdio.h>

int n, x, f[100], num;

int sumcif (int nr)
{
    int s = 0;
    while (nr)
    {
        s += nr%10;
        nr /= 10;
    }
    return s;
}

int main ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &x);
        f[sumcif(x)]++;
    }
    for (int i = 0; i < 100; i++)
        if (f[i]%2 == 0)
            num += f[i]/2;
    printf ("%d", num);
    return 0;
}
