//TODO
#include <stdio.h>

int n, a[100001], f[100];

int main ()
{
    FILE *in, *out;
    in = fopen ("frecventa1.in", "r");
    out = fopen ("frecventa1.out", "w");

    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf (in, "%d", &a[i]);
        f[a[i]]++;
    }
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (f[a[i]] < f[a[j]])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    
    fclose (in);
    fclose (out);
    return 0;
}
