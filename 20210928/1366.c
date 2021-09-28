#include <stdio.h>

int a[10001], n, ok;

void citire ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf ("%d", &a[i]);
}

int main ()
{
	int i;
	citire ();
	for (int i = 1; i <= n; i++)
		printf ("%d ", a[i]);
	printf ("\n");
	do
	{
		while (i < n)
		{
			i = 1;
			ok = 0; // no more insertion
			if (a[i]%2 == a[i+1]%2 && a[i] != a[i+1]) //more sane way of checking if same even or odd
			{
				for (int j = n; j >= i+1; j--)
					a[j+1] = a[j];
				a[i+1] = (a[i]+a[i+1])/2;
				i += 2; n++;
				ok = 1;
			}
			else i++;
		}
		if (ok)
		{
			for (i = 1; i <= n; i++)
				printf ("%d ", a[i]);
			printf ("\n");
		}
			
	} while (ok); // same as 1365.c
	return 0;
}
