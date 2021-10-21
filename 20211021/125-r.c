//TODO: doesnt output anything
#include <stdio.h>

FILE *in, *out;

int n, a[10], x[10], p[10];

void afisare ()
{
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[x[i]]);
    fprintf (out, "\n");
}

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (a[k] == a[i])
            return 0;
    return 1;
}

int solutie (int k)
{
    return n == k;
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
    {
    if (!p[i])
    {
        x[k] = i;
        p[i] = 1;
        if (valid(k))
        {
            if (solutie(k)) afisare();
        }
        else back(k+1);
        p[i] = 0;
    }
    }
}

int main ()
{
    int aux;
    in = fopen ("permutari2.in", "r");
    out = fopen ("permutari2.out", "w");
    for (int i = 1; i <= n; i++)
        fscanf (in, "%d", &a[i]);
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    }
    back(1);
    fclose(in);
    fclose(out);
    return 0;
}
