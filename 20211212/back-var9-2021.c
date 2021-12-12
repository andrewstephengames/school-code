/*
    2. Utilizând metoda backtracking se generează toate posibilitățile de a planta de-a lungul unei străzi cinci 
    arbori din mulțimea {salcie, carpen, larice, fag, ulm}. Două soluții sunt diferite dacă ordinea 
    arborilor diferă. Primele patru soluții obținute sunt, în această ordine: (salcie, carpen, larice, fag, ulm),
    (salcie, carpen, larice, ulm, fag), (salcie, carpen, fag, larice, ulm), (salcie, carpen, fag, ulm, larice).
    Indicați antepenultima soluție generată. 
    a. (ulm, fag, larice, salcie, carpen) 
    b. (ulm, salcie, larice, fag, carpen) 
    c. (ulm, fag, carpen, larice, salcie) 
    d. (ulm, fag, carpen, salcie, larice) 
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 5)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return 5 == k;
}

void tipar ()
{
    printf ("(");
    for (int i = 1; i <= 5; i++)
    {
        if (i < 5)
            switch (st[i])
            {
                case 1:
                    printf ("salcie, ");
                    break;
                case 2:
                    printf ("carpen, ");
                    break;
                case 3:
                    printf ("larice, ");
                    break;
                case 4:
                    printf ("fag, ");
                    break;
                case 5:
                    printf ("ulm, ");
                    break;
            }
        if (i == 5)
            switch (st[i])
            {
                case 1:
                    printf ("salcie");
                    break;
                case 2:
                    printf ("carpen");
                    break;
                case 3:
                    printf ("larice");
                    break;
                case 4:
                    printf ("fag");
                    break;
                case 5:
                    printf ("ulm");
                    break;
            }
    }
    printf (")\n");
}

void back (int k)
{
    int as, ev;
    init (k);
    while (k > 0)
    {
        do
        {
            as = succesor (k);
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
