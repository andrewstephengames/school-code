#include <stdio.h>

int x[10], n;

void afisare ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", x[i]);
    printf ("\n");
}

int ok (int k)
{
    for (int i = 1; i < k; i++)
        if (x[k] == x[i])
            return 0;
    return 1;
}

int solutie (int k)
{
    return (n == k);
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
    {
        x[k] = i;
        if (ok(k))
            if (solutie(k))
                afisare ();
        else
            back (k+1);
    }
}

int main ()
{
    scanf ("%d", &n);
    back(1);
    return 0;
}
