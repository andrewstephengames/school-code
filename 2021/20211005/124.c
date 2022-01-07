#include <stdio.h>

FILE *in, *out;
int n, a[10];

void afisare ()
{
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[i]);
    fprintf (out, "\n");
}

int ok (int k)
{
    for (int i = k-1; i > 0; i--)
        if (a[k] == a[i]) return 0;
    return 1;
}

int solutie (int k)
{
    return (n == k);
}

void back (int k)
{
    for (int i = n; i > 0; i--)
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
    in = fopen ("permutari1.in", "r");
    out = fopen ("permutari1.out", "w");
    fscanf (in, "%d", &n);
    back(1);
    return 0;
}
