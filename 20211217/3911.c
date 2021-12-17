//TODO: only outputs two sets
#include <stdio.h>

int n, a[16], st[16];

int prim (int x)
{
    if (x < 2) return 0;
    if (x == 2 || x == 3 || x == 5 || x == 7)
        return 1;
    if (x%2 == 0) return 0;
    for (int i = 9; i*i <= x; i+=2)
        if (n%i == 0)
            return 0;
    return 1;
}

int valid (int k)
{
    if (prim(a[st[k]]))
        if (st[k] != k)
            return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[st[i]]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
    {
        st[k] = i;
        if (valid(k))
            if (n == k)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    back (1);
    return 0;
}
