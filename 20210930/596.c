#include <stdio.h>

FILE *in, *out;

int n, a[25001], day;

void citire ()
{
    fscanf (in, "%d", &n);
    for (int i = 1; i <= n; i++)
        fscanf (in, "%d", &a[i]);
}

void afisare ()
{
    fprintf (out, "%d\n", day);
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[i]);
}

int main ()
{
    int ok;
    in = fopen ("numere2.in", "r");
    out = fopen ("numere2.out", "w");
    citire();
    do
	{
		ok = 0;
		for (int i = 1; i <= n && !ok; i++)
		{
			if (a[i] == a[i+1])
				ok = 1;
		if (ok)
		{
			for (int j = i+2; j < n-1; j++)
			{
				a[j-2] = a[j];
			}
			n -= 2;
//			i += 2;
			day++;
		}
                }
	} while (ok);	
    afisare();
    fclose (in);
    fclose(out);
    return 0;
}
