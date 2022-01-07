#include <stdio.h>

FILE *in, *out;
int a[10], n;

void afisare ()
{
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[i]);
    fprintf (out, "\n");
}

int ok (int k)
{
    for (int i = 1; i < k; i++)
        if (a[k] == a[i]) return 0;
    return 1;
}

int solutie (int k)
{
    return (n == k);
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
    {
        a[k] = i;
        if (ok (k))
            if (solutie(k))
                afisare ();
        else 
            back(k+1);
    }
}

int main ()
{
    in = fopen ("permutari.in", "r");
    out = fopen ("permutari.out", "w");
    fscanf (in, "%d", &n);
    back(1);
    return 0;
}
