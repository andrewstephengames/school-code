#include <stdio.h>

FILE *in, *out;
int ok;

int main ()
{
    in = fopen ("paritar.in", "r");
    out = fopen ("paritar.out", "w");
    int n, a[500002];
    fscanf (in, "%d", &n);
    for (int i = 0; i < 2*n; i++)
        fscanf (in, "%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = n; j < n*2; j++)
        {
            if (a[i]%2 == 0 && a[j]%2 == 0)
            {
                ok++;
//                printf ("%d:%d-%d\n", ok, a[i], a[j]);
                break;
            }
            if (a[i]%2 == 1 && a[j]%2 == 1)
            {
                ok++;
//                printf ("%d:%d-%d\n", ok, a[i], a[j]);
                break;
            }
        }
    if (ok == n) fprintf (out, "DA");
    else fprintf (out, "NU");
//    printf ("%d\n", ok);
    return 0;
}
