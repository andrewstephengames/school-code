//TODO
#include <stdio.h>

int n, a[16], st[16];

int prim (int num)
{
    if (num < 2) return 0;
    if (num == 2 || num == 3 || num == 5 || num == 7) 
        return 1;
    if (num%2 == 0) return 0;
    for (int i = 9; i*i <= num; i++)
        if (num%i == 0)
            return 0;
    return 1;
}

int valid (int k)
{
    if (prim(a[st[k]]))
        if (a[st[k]] != a[k])
            return 0;
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
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
        if (valid (k))
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
