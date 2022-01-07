#include <stdio.h>

int v[101];

void citire (int v[], int n)
{
    for (int i = 0; i<n; i++)
        scanf ("%d", &v[i]);
}

void afisare (int v[], int n)
{
    for (int i = 0; i<n; i++)
        printf ("%d\n", v[i]); 
}

void sort (int v[], int n)
{
    int inv;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                inv = v[i];
                v[i] = v[j];
                v[j] = inv;
            }
        }
    }
}

int main ()
{
    int n;
    scanf ("%d", &n);
    citire (v, n);
    sort (v, n);
    afisare (v, n);
    return 0;
}
