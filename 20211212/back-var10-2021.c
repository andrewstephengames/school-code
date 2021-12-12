/*
    TODO
    3. Utilizând metoda backtracking, se generează toate modalitățile de forma un grup de patru persoane 
    din mulțimea {Ana, Ioana, Lia, Maria, Miruna, Simona}. Două grupuri diferă prin cel puțin o persoană. 
    Primele cinci soluții generate sunt, în această ordine: (Ana, Ioana, Lia, Maria), (Ana, Ioana, Lia, 
    Miruna), (Ana, Ioana, Lia, Simona), (Ana, Ioana, Maria, Miruna), (Ana, Ioana, Maria, 
    Simona). Indicați o enumerare generată ca soluție, în această formă. 
    a. (Ana, Lia, Maria, Miruna, Simona) 
    b. (Ioana, Maria, Miruna, Simona) 
    c. (Lia, Ioana,  Maria, Simona) 
    d. (Maria, Miruna, Lia, Simona) 
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
                    printf ("Ana, ");
                    break;
                case 2:
                    printf ("Ioana, ");
                    break;
                case 3:
                    printf ("Lia, ");
                    break;
                case 4:
                    printf ("Maria, ");
                    break;
                case 5:
                    printf ("Miruna, ");
                    break;
                case 6:
                    printf ("Simona, ");
                    break;
            }
        if (i == 4)
            switch (st[i])
            {
                case 1:
                    printf ("Ana");
                    break;
                case 2:
                    printf ("Ioana");
                    break;
                case 3:
                    printf ("Lia");
                    break;
                case 4:
                    printf ("Maria");
                    break;
                case 5:
                    printf ("Miruna");
                    break;
                case 6:
                    printf ("Simona");
                    break;
            }
    }
    printf (")\n");
}

/*
void tipar ()
{
    for (int i = 1; i <= 4; i++)
        printf ("%d", st[i]);
    printf ("\n");
}
*/

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
    return 0;
}
