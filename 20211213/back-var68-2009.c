/*
    TODO: no output
    2. Se utilizează metoda backtracking pentru a genera toate submulţimile cu p elemente ale 
    unei mulţimi cu m elemente.  
    Dacă m=7 şi p=1,scrieţi care este numărul de submulţimi generate.  
    Dar dacă m=7 şi p=4? 
*/
#include <stdio.h>

int st[10], m, p;

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

void tipar ()
{
    printf ("{");
    for (int i = 1; i <= m; i++)
        if (st[i] == 1)
        {
            if (i < m)
                printf ("%d, ", i);
            if (i == m)
                printf ("%d", i);
        }
    printf ("}\n");
}

int solutie (int k)
{
    return p == k;
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
            if (as) ev = valid(k);
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
    scanf ("%d %d", &m, &p);
    back (1);
    return 0;
}
