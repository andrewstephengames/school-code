//2734	
#include <stdio.h>

int n, m, a[1001], b[1001];

void citire ()
{
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
}

void eldist (int a[])
{	
	int ok;
	b[m] = a[0];
	for (int i = 1; i < n; i++)
	{
		ok = 0; 
		for (int j = 0; j < m && !ok; j++)
		{
			if (a[i] == b[j]) ok = 0;
			if (!ok) b[m] = a[i], m++;
		}
		
	}
			
}

void afisare ()
{
	for (int i = 0; i < m; i++)
		printf ("%d ", a[i]);
}

int main ()
{
	citire ();
	eldist (a);
	afisare ();
	return 0;
}
