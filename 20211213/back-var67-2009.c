/*
    2. Se generează în ordine crescătoare, toate numerele naturale de 5 cifre distincte, care se 
    pot forma cu cifrele 5,6,7,8 şi 9. Să se precizeze numărul generat imediat înaintea şi 
    numărul generat imediat după secvenţa următoare : 67589,67598,67859. 
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 4;
}

int succesor (int k)
{
    if (st[k] < 9)
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
    return 5 == k;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
        printf ("%d", st[i]);
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
