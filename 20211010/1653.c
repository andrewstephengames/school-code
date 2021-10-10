#include <stdio.h>

int main ()
{
    int n, a[101], b[101], aux, ok = 1;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf ("%d", &b[i]);
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
            if (b[i] > b[j])
            {
                aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }
        }
    for (int i = 0; i < n-1; i++)
    {
//        printf ("%d:%d\n", a[i], b[i]);
        if ((float) a[i]/b[i] != (float) a[i+1]/b[i+1])
        {
            ok = 0;
            break;
        }
    }
    if (ok) printf ("DA");
    else printf ("NU");
    return 0;
}
