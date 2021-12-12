/*
    1.  Se generează, utilizând metoda backtracking, toate modalităţile de repartizare a n teme de 
    proiecte, numerotate de la 1 la n, pentru m elevi (n<m), numerotaţi de la 1 la m, astfel încât 
    fiecare temă să fie rezolvată de cel puţin un elev. Care este numărul total de soluţii 
    generate pentru m=3 şi n=2, dacă primele 3 soluţii generate sunt, în ordine, 1 1 2, 1 2 1, 1 2 2?
    O soluţie este scrisă sub forma t1, t2, ...,tm, unde ti reprezintă tema 
    repartizată elevului i (1≤i≤m, 1≤ti≤n). 
*/
#include <stdio.h>

int st[10], m, n;

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < n)
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
    return m == k;
}

void tipar ()
{
    for (int i = 1; i <= m; i++)
        printf ("%d ", st[i]);
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
    scanf ("%d %d", &m, &n);
    back (1);
    return 0;
}
