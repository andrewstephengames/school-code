/*
    Se genereaza cele 10 submultimi cu 3 elemente ale multimii {1, 2, 3, 4, 5} in care nu conteaza ordinea: 1 2 3; 1 2 4; 1 2 5; 1 3 4; 1 3 5; 1 4 5; 2 3 4; 2 3 5; 2 4 5; 3 4 5. Se observa ca doua dintre submultimi contin secventa 2 4 (elementele sunt pe pozitii consecutive). Daca se genereaza submultimi cu 4 elemente ale multimii { 1, 2 ,3 , 4, 5, 6 } in care nu conteaza ordinea, cate submultimi contin secventa 2 4?
    8 submultimi contin secventa 2 4.    
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
/*
    if (st[k] == 4 && st[k-1] != 2)
        return 0;
    if (st[k] != 4 && st[k-1] == 2)
        return 0;
*/
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return k == 3;
}

void tipar ()
{
    for (int i = 1; i <= 3; i++)
    {
        if (i < 3)
            printf ("%d ", st[i]);
        if (i == 3)
            printf ("%d", st[i]);
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
