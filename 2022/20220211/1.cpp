/*
        TODO: broken
	1. 
	Subprogramul prime are trei parametri: 
	• n, prin care primește un număr natural (n∈ [4,10^9]); 
	• x și y, prin care furnizează cele mai mari două numere prime din intervalul [1,n), x<y. 
	Scrieți definiția completă a subprogramului. 
	Exemplu: dacă n=49, în urma apelului x=43, y=47. 
	(10p.) 
*/
#include <stdio.h>

int nrprim (int nr)
{
    if (nr < 2) return 0;
    if (nr == 2) return 1;
    if (nr%2 == 0) return 0;
    for (int i = 3; i*i <= nr; i += 2)
        if (nr%i == 0)
            return 0;
    return 1;
}

void prime (int n, int &x, int &y)
{
    int nr = 1;
    for (int i = n-1; i > 0; i--)
    {
        if (nrprim(i) && nr)
        {
            y = i;
            continue;
        }
        if (nrprim(i) && !nr)
        {
            x = i;
            break;
        }
        nr--;
    }
            
}

int main ()
{
    int n, x, y;
    fscanf (stdin, "%d", &n);
    prime (n, x, y);
    printf ("%d %d\n", x, y);
    return 0;
}
