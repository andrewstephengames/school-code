#include <stdio.h>

int main ()
{
    int n, k, c, nr, p = 1;
    scanf ("%d %d", &n, &k);
    if (k == 0)
        nr = -1;
    else
    {
        nr = 0;
        do
        {
            c = n%2;
            n /= 10;
            if (c != 0)
            {
                nr += (n%10)*p;
                p *= 10;
            } 
            else k--;
        } while (n != 0 && k != 0);
    }
    printf ("\n%d\n", nr);
    return 0;
}
