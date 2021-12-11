/*
	3. Utilizând metoda backtracking se generează, în ordine crescătoare, toate numerele de câte 5 cifre, 
	toate din mulțimea {1,2} cu proprietatea că nu există mai mult de două cifre 1 pe poziţii consecutive. 
	Primele 5 soluţii generate sunt, în această ordine: 11211, 11212, 11221, 11222, 12112. Indicaţi cea 
	de a 8-a soluţie generată. 
	a. 12122 
	b. 12211 
	c. 12212 
	d. 12221
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 2)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    if (k > 2)
        if (st[k-2] == 1 && st[k-1] == 1 && st[k] == 1)
            return 0;
    return 1;
}

int solutie (int k)
{
    return 5 == k;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
        printf ("%d", st[i]);
    printf ("\n");
}

void back (int k)
{
    int as, ev;
    init (k);
    while (k > 0)
    {
        do
        {
            as = succesor(k);
            if (as) ev = valid (k);
        } while (as && !ev);
        if (as)
            if (solutie(k))
                tipar();
            else
            {
                k++;
                init(k);
            }
        else k--;
    }
}

int main ()
{
    back (1);
    return 0;
}
