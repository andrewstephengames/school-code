/*
    3. Pe parcursul vacanței au loc mai multe reprezentații online ale unei piese de teatru; pentru o reprezentație 
    sunt necesari trei copii, unul pentru rolul principal, iar fiecare dintre ceilalți doi pentru câte un rol secundar. 
    Pentru oricare două reprezentații distincte cel puțin un rol este atribuit, în cele două distribuții, unor copii 
    diferiți. În urma audițiilor au fost selectați șase copii, Alex, Cezar, Tudor, Daria, Ela și Maria: doar 
    Alex poate primi rolul principal, iar fiecare dintre ceilalți cinci copii poate interpreta oricare dintre cele două 
    roluri secundare. De exemplu, pentru patru reprezentații sunt distribuiți, în ordinea rolurilor, copiii: 
    (Alex, Ela, Maria), (Alex, Maria, Ela), (Alex, Maria, Cezar), (Alex, Cezar, Tudor). Indicați numărul 
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
                    printf ("Alex,");
                    break;
                case 2:
                    printf ("Cezar,");
                    break;
                case 3:
                    printf ("Tudor,");
                    break;
                case 4:
                    printf ("Daria,");
                    break;
                case 5:
                    printf ("Ela,");
                    break;
                case 6:
                    printf ("Maria,");
                    break;
            }
        if (i == 3)
            switch (st[i])
            {
                case 1:
                    printf ("Alex");
                    break;
                case 2:
                    printf ("Cezar");
                    break;
                case 3:
                    printf ("Tudor");
                    break;
                case 4:
                    printf ("Daria");
                    break;
                case 5:
                    printf ("Ela");
                    break;
                case 6:
                    printf ("Maria");
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
                tipar();
            }
        else k--;
    }
}

int main ()
{
    back (1);
    return 0;
}
