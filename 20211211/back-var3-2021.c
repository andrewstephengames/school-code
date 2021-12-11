/*
3. Utilizând metoda backtracking, se generează toate modalitățile de a selecta un grup de patru muzee de 
vizitat în București, dintre cele aflate în mulțimea {Muzeul de Artă Veche Apuseană (MAVA), Muzeul 
Colecțiilor de Artă (MCA), Muzeul Căilor Ferate Române (MCFR), Muzeul Național al Hărților și Cărții 
Vechi (MNHCV), Muzeul Național al Literaturii Române (MNLR), Muzeul Național Tehnic (MNT)}. Două 
grupuri diferă prin cel puțin un muzeu. Primele cinci soluții generate sunt, în această ordine: (MAVA, MCA, 
MCFR, MNHCV), (MAVA, MCA, MCFR, MNLR), (MAVA, MCA, MCFR, MNT), (MAVA, MCA, MNHCV, MNLR), 
(MAVA, MCA, MNHCV, MNT). Indicați o enumerare care este generată ca soluție, în această ordine. 
a. (MNHCV, MNLR, MCFR, MNT) 
b. (MCA, MNHCV, MNLR, MNT) 
c. (MCA, MCFR, MNHCV, MNLR, MNT) 
d. (MAVA, MCA,  MNHCV, MCFR) 
*/

#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 6)
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
    return 4 == k;
}

void tipar ()
{
    printf ("(");
    for (int i = 1; i <= 4; i++)
    {
        if (i < 4)
        switch (st[i])
        {
            case 1:
                printf ("MAVA, ");
                break;
            case 2:
                printf ("MCA, ");
                break;
            case 3:
                printf ("MCFR, ");
                break;
            case 4:
                printf ("MNHCV, ");
                break;
            case 5:
                printf ("MNLR, ");
                break;
            case 6:
                printf ("MNT, ");
                break;
        }
        if (i == 4)
        switch (st[i])
        {
            case 1:
                printf ("MAVA");
                break;
            case 2:
                printf ("MCA");
                break;
            case 3:
                printf ("MCFR");
                break;
            case 4:
                printf ("MNHCV");
                break;
            case 5:
                printf ("MNLR");
                break;
            case 6:
                printf ("MNT");
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
