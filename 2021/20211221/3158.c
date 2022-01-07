//no output
#include <stdio.h>

int n, st[50], a[50], num;

int ogl (int nr)
{
    int ogl = 0;
    while (nr)
    {
        ogl = ogl*10+nr%10;
        nr /= 10;
    }
    return ogl;
}

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= num; i++)
        printf ("%d", a[st[i]]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 1; i <= num; i++)
    {
        st[k] = i;
        if (valid (k))
            if (num == k)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    int m = ogl (n);
    scanf ("%d", &n);
    while (m)
    {
        num++;
        a[num] = n%10;
        m /= 10;
    }
    back (1);
    return 0;
}
