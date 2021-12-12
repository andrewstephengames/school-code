/*
    TODO: fara output
    3. Utilizând metoda backtracking se generează toate grupele de accesorii pentru tenis de câmp din 
    mulțimea {bentiță, fileu, grip, manșete, mingi, rachetă, racordaj, șapcă}. Accesoriile au 
    preţurile următoare, exprimate în lei: bentiță - 40, fileu - 400, grip - 30, manșete - 30, mingi - 
    10, rachetă - 400, racordaj - 70, șapcă - 60. Într-o grupă accesoriile sunt distincte, nu contează 
    ordinea lor și costă, în total, exact 500 de lei. Primele trei soluții generate sunt, în această ordine: 
    (bentiță, fileu, grip, manșete), (bentiță, fileu, șapcă), (bentiță, grip, manșete, 
    rachetă). A cincea soluție generată este: 
    a. (bentiță, rachetă, șapcă) 
    b. (fileu, grip, mingi, șapcă) 
    c. (grip, rachetă, racordaj) 
    d. (manșete, mingi, rachetă, șapcă) 
*/
#include <stdio.h>

int st[10];
int a[10] = { 0, 40, 400, 30, 30, 10, 400, 70, 60 };

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 8)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int solutie (int k)
{
    return k == 3;
}

int valid (int k)
{
    if (k == 3)
        if (a[k]+a[k-1]+a[k-2] != 500)
            return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
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
                    printf ("bentita, ");
                    break;
                case 2:
                    printf ("fileu, ");
                    break;
                case 3:
                    printf ("grip, ");
                    break;
                case 4:
                    printf ("mansete, ");
                    break;
                case 5:
                    printf ("mingi, ");
                    break;
                case 6:
                    printf ("racheta, ");
                    break;
                case 7:
                    printf ("racordaj, ");
                    break;
                case 8:
                    printf ("sapca, ");
                    break;
            }
        if (i == 3)
            switch (st[i])
            {
                case 1:
                    printf ("bentita");
                    break;
                case 2:
                    printf ("fileu");
                    break;
                case 3:
                    printf ("grip");
                    break;
                case 4:
                    printf ("mansete");
                    break;
                case 5:
                    printf ("mingi");
                    break;
                case 6:
                    printf ("racheta");
                    break;
                case 7:
                    printf ("racordaj");
                    break;
                case 8:
                    printf ("sapca");
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
