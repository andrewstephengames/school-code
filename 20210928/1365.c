//i suck at making it compile (TODO
#include <stdio.h>
#include <math.h>

int a[65], n;

void citire ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

int patrat (int n)
{
    if (sqrt(n) == (int)sqrt(n))
        return 1;
    return 0;
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[i]);
}

int main ()
{
    citire ();
    while (i < n)
	{
		if (patrat (a[i]))
		{
			for (j = n; j >= i; j--)
				a[j+1] = a[j];
			a[i] = sqrt(a[i]);
			n++; i+=2;
		}
	}
    afisare ();
    return 0;
}
