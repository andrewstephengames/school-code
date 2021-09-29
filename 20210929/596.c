#include <stdio.h>

FILE *in, *out;

int n, a[25001], day;

void citire ()
{
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
        fscanf (in, "%d", &a[i]);
}

void afisare ()
{
    fprintf (out, "%d\n", day);
    for (int i = 0; i < n; i++)
        fprintf (out, "%d ", a[i]);
}

int main ()
{
    in = fopen ("numere2.in", "r");
    out = fopen ("numere2.out", "w");
    int j, pair;
    citire ();
    for (int i = 0; i < n-1; i++)
    {
        j = i+1; pair = 0;
        while (a[i] == a[j] && j < n &&
                pair < 2)
        {
            pair++;
            j++;
        }
        for (int k = i; k < n; k++)
        {
            a[k-1] = a[k];
//            a[k] = a[k+1];
        }
        n -= 2; i += 2;
    }
    afisare();
    fclose (in);
    fclose(out);
    return 0;
}
