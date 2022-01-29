#include <stdio.h>

int n, st[20], p, nr;

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
            return 0;
    return 1;
}

void generate ()
{
    for (int i = 1; i <= p; i++)
        printf ("%d ", st[i]);
}

void back (int k)
{
    for (int i = 1; i <= p; i++)
    {
        st[k] = i;
        if (valid(k))
            if (p == k)
            {
                nr++;
                if (nr == n)
                    generate();
            } 
            else back (k+1);
    }
}

int main ()
{
    scanf ("%d %d", &p, &n);
    back (1);
    return 0;
}
