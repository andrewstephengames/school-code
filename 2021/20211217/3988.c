//TODO: wrong output
#include <stdio.h>
#include <stdlib.h>

int n, st[10], num;

int valid (int k)
{
    if (k > 1)
        if (abs(st[k]-st[k-1]) > k)
            return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", st[i]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
    {
        st[k] = i;
        if (valid (k))
            if (n == k)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    scanf ("%d %d", &n, &num);
    back (1);
    return 0;
}
