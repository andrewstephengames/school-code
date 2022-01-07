//TODO: prints 32765 instead of 2
#include <iostream>

void cnt_cif (int n, int k, int &c)
{
    if (n == 0 && k != 0) c = 0;
    if (n == 0 && k == 0) c = 1;
    if (n%10 >= k)
    {
        cnt_cif (n/10, k, c);
        c = 1;
    }
}

int main ()
{
    int n, k, c;
    scanf ("%d %d", &n, &k);
    cnt_cif (n, k, c);
    printf ("%d", c);
    return 0;
}
