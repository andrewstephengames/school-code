/*
    2. Utilizând metoda backtracking se generează toate posibilitățile de a planta în trei ghivece, așezate de-a 
    lungul unui pervaz, plante distincte din mulțimea {azalea, begonia, vriesea, busuioc, ferigă}, 
    astfel încât în oricare două ghivece alăturate să nu fie două plante cu flori sau două plante fără flori; 
    primele trei plante din mulțime sunt cu flori, iar celelalte sunt fără flori. Două soluții diferă prin cel puțin o 
    plantă sau prin ordinea plantelor. Primele şase soluţii generate sunt, în această ordine, (azalea, 
    busuioc, begonia), (azalea, busuioc, vriesea), (azalea, ferigă, begonia), (azalea, ferigă, vriesea), 
    (begonia, busuioc, azalea), (begonia, busuioc, vriesea). Indicați a noua soluţie generată. 
    a. (begonia, ferigă, vriesea) 
    b. (ferigă, azalea, begonia) 
    c. (busuioc, azalea, ferigă)  
    d. (vriesea, busuioc, azalea) 
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

int solutie (int k)
{
    return 3 == k;
}

int valid (int k)
{
    if (k > 2)
    {
        if (st[k] == 1 && st[k-1] == 2)
            return 0;
        if (st[k] == 2 && st[k-1] == 1)
            return 0;
        if (st[k] == 1 && st[k-1] == 3)
            return 0;
        if (st[k] == 3 && st[k-1] == 1)
            return 0;
        if (st[k] == 2 && st[k-1] == 3)
            return 0;
        if (st[k] == 3 && st[k-1] == 2)
            return 0;
        if (st[k] == 4 && st[k-1] == 5)
            return 0;
        if (st[k] == 5 && st[k-1] == 4)
            return 0;
    }
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
            return 0;
    return 1;
}

void tipar ()
{
    printf ("(");
    for (int i = 1; i <= 3; i++)
    {
        if (i < 3)
            switch (st[i])
            {
                case 1:
                    printf ("azalea, ");
                    break;
                case 2:
                    printf ("begonia, ");
                    break;
                case 3:
                    printf ("vriesea, ");
                    break;
                case 4:
                    printf ("busuioc, ");
                    break;
                case 5:
                    printf ("feriga, ");
                    break;
            }
        if (i == 3)
            switch (st[i])
            {
                case 1:
                    printf ("azalea");
                    break;
                case 2:
                    printf ("begonia");
                    break;
                case 3:
                    printf ("vriesea");
                    break;
                case 4:
                    printf ("busuioc");
                    break;
                case 5:
                    printf ("feriga");
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
    back(1);
    return 0;
}
