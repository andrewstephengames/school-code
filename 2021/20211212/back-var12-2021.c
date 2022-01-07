/*
    3. Utilizând metoda backtracking se generează toate posibilitățile de a forma șiraguri din câte 3 mărgele de 
    culori distincte din mulțimea {roșu,galben,verde,albastru,violet}. Două șiraguri sunt distincte 
    dacă diferă prin cel puțin o culoare a mărgelelor sau prin ordinea acestora. Primele patru soluții generate 
    sunt, în această ordine: (roșu, galben, verde), (roșu, galben, albastru), (roșu, galben, 
    violet), (roșu, verde, galben). Indicați a zecea soluție generată. 
    a. (galben,roșu,verde) 
    b. (roșu,albastru,violet) 
    c. (roșu,violet,verde) 
    d. (roșu,violet,galben) 
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
    return 3 == k;
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
                    printf ("rosu, ");
                    break;
                case 2:
                    printf ("galben, ");
                    break;
                case 3:
                    printf ("verde, ");
                    break;
                case 4:
                    printf ("albastru, ");
                    break;
                case 5:
                    printf ("violet, ");
                    break;
            }
        if (i == 3)
            switch (st[i])
            {
                case 1:
                    printf ("rosu");
                    break;
                case 2:
                    printf ("galben");
                    break;
                case 3:
                    printf ("verde");
                    break;
                case 4:
                    printf ("albastru");
                    break;
                case 5:
                    printf ("violet");
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
