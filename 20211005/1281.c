//TODO: learn more
#include <stdio.h>

int n;
char a[10];

void afisare ()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            
//        printf ("%d ", a[i]);
        }
        printf ("\n");
    }
}

int ok (int k)
{
    for (int i = 1; i < k; i++)
        if (a[i] == a[k]) return 0;
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
        a[k] = i;
        if (ok(k))
            if (solutie(k))
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
