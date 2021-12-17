//TODO: no lexicographical order
#include <stdio.h>

int n, a[12], st[12], min = 2147483647;

int valid (int k)
{
    if (a[st[k]] == min)
        if (a[st[k]] != a[k])
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
    {
        scanf ("%d", &a[i]);
        if (a[i] < min)
            min = a[i];
    }
    back (1);
    return 0;
}
