/*
 * muchii graf neorientat
 * back
 * cicluri care trec prin v != v1
 * no output
 */
#include <stdio.h>

int a[101][101], st[51], m, n, v;

int valid (int k)
{
     int i;
     if (!a[st[k-1]][st[k]] && k > 1)
          return 0;
     for (i = 1; i < k; i++)
          if (st[i] <= st[k])
               return 0;
     return 1;
}

int check (int k)
{
     int i;
     for (i = 2; i <= k; i++)
          if (st[i] == v)
               return 1;
     return 0;
}

void afisare (int k)
{
     int i;
     for (i = 1; i <= k; i++)
          printf ("%d ", st[i]);
     printf ("\n");
}

int back (int k)
{
     int i;
     for (i = 1; i <= n; i++)
     {
          st[k] = i;
          if (valid (k) && check (k))
               if (k > 2 && st[1] == st[k])
                    afisare (k);
               else back (k+1);
     }
}

int main ()
{
     FILE *in = fopen ("cicluri.txt", "r");
     int i, j, x, y;
     fscanf (in, "%d", &n);
     while (fscanf (in, "%d %d", &x, &y) != EOF)
          a[x][y] = a[y][x] = 1;
     fscanf (in, "%d", &v);
     back (1);
     fclose (in);
     return 0;
}
