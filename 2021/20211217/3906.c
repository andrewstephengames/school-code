#include <stdio.h>

int n, s = 0, a[10], st[10], x;

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    int number = 0;
    for (int i = 1; i <= x; i++)
        number = number*10+a[st[i]];
    s += number;
}

void back (int k)
{
    for (int i = 1; i <= x; i++)
    {
        st[k] = i;
        if (valid (k))
            if (k == x)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    scanf ("%d", &n);
    while (n)
    {
        x++;
        a[x] = n%10;
        n /= 10;
    }
    back (1);
    printf ("%d", s);
    return 0;
}
