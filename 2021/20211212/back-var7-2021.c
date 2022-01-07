/*
    3. Utilizând metoda backtracking se generează în ordine alfabetică anagramele cuvântului bine. Primele 
    patru soluții generate sunt, în această ordine: bein, beni, bien, bine. Indicați a șaptea soluție generată. 
    a. einb 
    b. eibn 
    c. ebni 
    d. ebin 
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 4)
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
    for (int i = 1; i <= 4; i++)
        switch (st[i])
        {
            case 1:
                printf ("b");
                break;
            case 2:
                printf ("i");
                break;
            case 3:
                printf ("n");
                break;
            case 4:
                printf ("e");
                break;
        }
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
