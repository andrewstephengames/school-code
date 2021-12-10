/*
    Se utilizeaza metoda backtracking pentru generarea permutarilor de 5 obiecte, primele 4 permutari sunt 5 4 3 2 1; 5 4 3 1 2; 5 4 2 3 1; 5 4 2 1 3. Care este a saptea permutare?
    a saptea permutare = 5 3 4 2 1
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 6;
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
    return 5 == k;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i < 5)
            printf ("%d ", st[i]);
        if (i == 5)
            printf ("%d", st[i]);
    }
    printf ("; ");
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
