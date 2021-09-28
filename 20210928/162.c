#include <stdio.h>

int n, a[21], aux;

void citire ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf ("%d", &a[i]);
}

void afisare ()
{
	for (int i = 1; i <= n; i++)
		printf ("%d ", a[i]);
	printf ("\n");
}

int main ()
{
	citire ();
	afisare();
	for (int j = 1; i < n; i++)
	{
		aux = a[0];
		for (int i = 2; i <= n; i++)
			a[i-1] = a[i];
		a[n] = aux;
	}
	a[n-1] = aux;
	afisare ();
	return 0;
}
