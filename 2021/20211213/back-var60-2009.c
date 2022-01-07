/*
    1.  Se utilizează metoda backtracking pentru a genera toate cuvintele care conţin toate literele din 
    mulţimea {i,n,f,o}, astfel încât fiecare literă să apară exact o dată într-un cuvânt; ştiind că 
    primul cuvânt generat este info, iar al doilea este inof, care este ultimul cuvânt obţinut?
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
        if (st[k] == st[i])
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
                printf ("i");
                break;
            case 2:
                printf ("n");
                break;
            case 3:
                printf ("f");
                break;
            case 4:
                printf ("o");
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
