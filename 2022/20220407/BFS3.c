#include <stdio.h>

int v, a[101][101], c[101], viz[101];

int main ()
{
     int i, pi = 1, ps = 1, n, x, m1, m2;
     FILE *in = fopen ("BFS.in", "r");
     FILE *out = fopen ("BFS.out", "w");
     fscanf (in, "%d %d", &n, &x);
     while (fscanf (in, "%d %d", &m1, &m2) != EOF)
          a[m1][m2] = a[m2][m1] = 1;
     c[pi] = x;
     viz[x] = 1;
     while (ps <= pi)
     {
          v = c[ps];
          for (i = 1; i <= n; i++)
               if (a[v][i] && !viz[i])
               {
                    pi++;
                    c[pi] = i;
                    viz[i] = 1;
               }
          ps++;
     }
     fprintf (out, "%d ", x);
     for (i = 1; i <= n; i++)
          if (viz[i] && i != x)
               fprintf (out, "%d ", i);
     fprintf (out, "\n");
     fclose (in);
     fclose (out);
     return 0;
}
