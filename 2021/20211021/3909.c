#include <stdio.h>

int a, b;

void afisare ()
{
    if (a < b)
    {
        for (int i = a; i <= b; i++)
            printf ("%d ", st[i]);
    }
}

int main ()
{
    scanf ("%d %d", &a, &b);
    back(1);
    return 0;
}
