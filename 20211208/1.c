#include <stdio.h>

void generatoare (int n)
{
    int ok = 0;
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
        {
            if ((float)((i*j)+(i/j)) == (float)n)
            {
                ok = 1;
                if (i%2 == 0)
                    printf ("%d-%d ", i, j);
            }
        }
    if (!ok)
        printf ("nu exista\n");
}

int main ()
{
    generatoare (2020);
    return 0;
}
