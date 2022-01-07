/*
    3. Utilizând metoda backtracking, se generează toate modalitățile de forma un grup de patru arbori cu flori 
    din mulțimea {albizia, jacaranda, laburnum, magnolie, mimoza, sakura}. Două grupuri diferă 
    prin cel puțin un arbore. Primele cinci soluții generate sunt, în această ordine: (albizia, jacaranda, 
    laburnum, magnolie), (albizia, jacaranda, laburnum, mimoza), (albizia, jacaranda, laburnum, sakura),
    (albizia, jacaranda, magnolie, mimoza), (albizia, jacaranda, magnolie, sakura). 
    Indicați o enumerare care este generată ca soluție. 
    a. (magnolie, mimoza,laburnum, sakura) 
    b. (jacaranda, magnolie, mimoza, sakura) 
    c. (jacaranda, laburnum, magnolie, mimoza, sakura) 
    d. (albizia, jacaranda,  magnolie, laburnum) 
    raspuns: a.
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
                    printf ("albizia, ");
                    break;
                case 2:
                    printf ("jacaranda, ");
                    break;
                case 3:
                    printf ("laburnum, ");
                    break;
                case 4:
                    printf ("magnolie, ");
                    break;
                case 5:
                    printf ("mimoza, ");
                    break;
                case 6:
                    printf ("sakura, ");
                    break;
            }
        if (i == 4)
            switch (st[i])
            {
                case 1:
                    printf ("albizia");
                    break;
                case 2:
                    printf ("jacaranda");
                    break;
                case 3:
                    printf ("laburnum");
                    break;
                case 4:
                    printf ("magnolie");
                    break;
                case 5:
                    printf ("mimoza");
                    break;
                case 6:
                    printf ("sakura");
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
