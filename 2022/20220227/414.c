/*TODO: output:
	1
	2 2 2
	3 3 3
	4 4 4
	5 5
*/
#include <stdio.h>

int a[101][101], e1[101], e2[101];

int main ()
{
    FILE *in, *out;
    in = fopen ("listavecini.in", "r");
    out = fopen ("listavecini.out", "w");

    int n, i, j;
    fscanf (in, "%d", &n);
    for (i = 1; i <= n; i++)
    {
        fscanf (in, "%d %d", &e1[i], &e2[i]);
        a[e1[i]][e2[i]] = 1;
        a[e2[i]][e1[i]] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i-1][j-1] == 1)
                fprintf (out, "%d ", i);
            if (a[i+1][j+1] == 1)
                fprintf (out, "%d ", i);
        }
        fprintf (out, "\n");
    }

    fclose(in);
    fclose(out);
    return 0;
}
