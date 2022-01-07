/*
    3. Observati ca ordinea de afisare a solutiilor
    depinde de ordinea in care se considera
    elementele multimilor A1, A2, ... Ce modificari
    trebuie aduse procedurii back astfel incat
    permutarile de 4 elemente sa fie afisate in
    ordinea: 4321, 4312, 4231, ..., 1243, 1234?
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 5;
}

int succesor (int k)
{
    if (st[k] > 1)
    {
        st[k]--;
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
