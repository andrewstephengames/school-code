/*
    3. Utilizând metoda backtracking se generează toate posibilitățile de a forma șiraguri din câte 
    4 pietre prețioase din mulțimea {rubin,opal,safir,smarald,topaz}, astfel încât pe oricare două
    poziții alăturate să nu se afle două pietre din submulțimea {rubin,safir,topaz}. Primele opt
    șiraguri generate sunt, în această ordine,  (rubin,opal,rubin,opal), (rubin,opal,rubin,smarald), 
    (rubin,opal,opal,rubin), (rubin,opal,opal,opal), (rubin,opal,opal,safir), 
    (rubin,opal,opal,smarald), (rubin,opal,opal,topaz), (rubin,opal,safir,opal). 
    Ultimul șirag generat este: 
    a. (topaz,smarald,topaz,topaz) 
    b. (topaz,smarald,topaz,opal) 
    c. (topaz,smarald,topaz,smarald) 
    d. (topaz,smarald,smarald,topaz) 
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 5)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    if (k > 1)
        if (st[k]%2 == 1 && st[k-1]%2 == 1)
            return 0;
    return 1;
}

int solutie (int k)
{
    return 4 == k;
}

void tipar ()
{
    printf ("(");
    for (int i = 1; i <= 4; i++)
    {
        if (i < 4)
            switch (st[i])
            {
                case 1:
                    printf ("rubin, ");
                    break;
                case 2:
                    printf ("opal, ");
                    break;
                case 3:
                    printf ("safir, ");
                    break;
                case 4:
                    printf ("smarald, ");
                    break;
                case 5:
                    printf ("topaz, ");
                    break;
            }
        if (i == 4)
            switch (st[i])
            {
                case 1:
                    printf ("rubin");
                    break;
                case 2:
                    printf ("opal");
                    break;
                case 3:
                    printf ("safir");
                    break;
                case 4:
                    printf ("smarald");
                    break;
                case 5:
                    printf ("topaz");
                    break;
            }
    }
    printf (")\n");
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
