//TODO: too hard
#include <stdio.h>

FILE *in, *out;
int n, a[10];

void citire ()
{
    fscanf (in, "%d", &n);
    for (int i = 1; i <= n; i++)
        fscanf (in, "%d", &a[i]);
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[i]);
    fprintf (out, "\n");
}

int ok (int k)
{
    for (int i = 1; i < k; i++)
        if (a[i] == a[k]) return 0;
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
//        a[k] = i;
        if (ok(k))
            if (solutie(k))
            {
                afisare ();
                printf ("%d\n%d\n", a[i], k);
            }
        else 
        {
            printf ("%d\n%d\n", a[i], k);
            back(k+1);
        }
    }
}

int main ()
{
    in = fopen ("permutari2.in", "r");
    out = fopen ("permutari2.out", "w");
    return 0;
}
