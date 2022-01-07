/*
    1. Se generează, prin metoda backtracking, toate partiţiile  mulţimii A={1,2} obţinându-se 
    următoarele soluţii: {1}{2};{1,2}. Se observă că dintre acestea, prima soluţie e alcătuită 
    din exact două submulţimi. Dacă se foloseşte aceeaşi metodă pentru a genera partiţiile 
    mulţimii {1,2,3} stabiliţi câte dintre soluţiile generate vor fi alcătuite din exact două 
    submulţimi.  
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = -1;
}

int succesor (int k)
{
    if (st[k] < 1)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    return 1;
}

int solutie (int k)
{
    return 3 == k;
}

void tipar ()
{
    printf ("{");
    for (int i = 1; i <= 3; i++)
        if (st[i] == 1)
        { 
            if (i < 3)
                printf ("%d, ", i);
            if (i == 3)
                printf ("%d", i);
        }
    printf ("}\n");
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
