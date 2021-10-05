//TODO: doesnt print anything
#include <stdio.h>

int n, a[16];

void afisare ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[i]);
    printf ("\n");
}

int ok (int k)
{
    for (int i = 1; i < k; i++)
        if (a[k] == a[i]) return 0;
    return 1;
}

int solutie (int k)
{
    return (k == n);
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[k]%2 == 1)
        {
            a[k] = i;
        }
        if (ok(k))
            if (solutie (k))
                afisare ();
        else back(k+1);
    }
}

int main ()
{
    scanf ("%d", &n);
    back(1);
    return 0;
}
