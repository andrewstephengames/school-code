/*
    3. Utilizând metoda backtracking se generează toate posibilitățile de a forma șiruri de câte 4 animale
    din mulțimea {cal,câine,papagal,porumbel,ponei}, astfel încât pe oricare două poziții alăturate să 
    nu se afle animale din submulțimea  {cal,papagal,ponei}. Primele opt soluții generate sunt, în 
    această ordine: (cal, câine, cal, câine), (cal, câine, cal, porumbel), (cal, câine, câine, 
    cal), (cal, câine, câine, câine), (cal, câine, câine, papagal), (cal, câine, câine, 
    porumbel), (cal, câine, câine, ponei), (cal, câine, papagal, câine). Indicați numărul de 
    soluții generate care au pe prima poziție un câine și pe ultima poziție un porumbel. 
    a. 20 
    b. 18 
    c. 16 
    d. 14 
*/
#include <stdio.h>

int st [10];

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
    if (k > 3)
        if (st[k]%2 == 1 && st[k-1]%2 == 1 && st[k-2]%2 == 1)
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
                    printf ("cal, ");
                    break;
                case 2:
                    printf ("caine, ");
                    break;
                case 3:
                    printf ("papagal, ");
                    break;
                case 4:
                    printf ("porumbel, ");
                    break;
                case 5:
                    printf ("ponei, ");
                    break;
            }
        if (i == 4)
            switch (st[i])
            {
                case 1:
                    printf ("cal");
                    break;
                case 2:
                    printf ("caine");
                    break;
                case 3:
                    printf ("papagal");
                    break;
                case 4:
                    printf ("porumbel");
                    break;
                case 5:
                    printf ("ponei");
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
