/*
    Se citesc numele a 6 elevi. Afisati toate
    submultimile multimii celor 6 elevi.
*/
#include <stdio.h>

int st[10];
char s[10][10];

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
    return 6 == k;
}

void tipar ()
{
    for (int i = 1; i <= 6; i++)
        printf ("%s ", s[10][i]);
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
    for (int i = 0; i < 6; i++)
        scanf ("%s", &s[10][i]); 
    back (1);
    return 0;
}
