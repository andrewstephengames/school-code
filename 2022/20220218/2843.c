//TODO
#include <stdio.h>

int main ()
{
    FILE *in, *out;
    in = fopen ("puteri6.in", "r");
    out = fopen ("puteri6.out", "w");
    int n, x, y, p, nr;
    fscanf (in, "%d %d", &n, &x);
    p = 1;
    while (fscanf (in, "%d", &y) != EOF && p >= n)
    {
        p++;
        if (x > y)
        {
            int tmp = x;
            x = y;
            y = tmp;
        }
        if (p == n)
            fprintf (out, "%d", y);
        fscanf (in, "%d", &x);
        p++;
    }
    if (p < n)
        fprintf (out, "Nu exista");
    else fprintf (out, "%d", nr);
    fclose (in);
    fclose (out);
    return 0;
}
