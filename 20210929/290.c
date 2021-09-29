//FIXME: only gives 70 points
#include <stdio.h>

int n, a[101], b[101], verify, j;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int checkOdd ()
{
    int check = 0;
    for (int i = 0; i < n; i++)
        if (a[i]%2 == 0) check++;
    return (check == 1);
}

void transform ()
{
    for (int i = 0; i < n; i++)
        if (a[i]%2 == 0)
        {
            b[j] = a[i];
            j++;
        }
}

int main ()
{
    citire ();
    transform ();
    for (int i = 0; i < j-1; i++)
        for (int k = i+1; k < j; k++)
            if (a[i] <= a[k]) verify++;
    if (checkOdd())
    {
        printf ("NU");
        return 0;
    }
    if (verify == j-1 && !checkOdd()) printf ("DA");
    else printf ("NU");
    return 0;
}
