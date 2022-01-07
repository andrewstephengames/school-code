/*
    3. Având la dispoziție cinci tipuri de prăjituri, cu caise, cu căpșune, cu prune, cu piersici, respectiv 
    cu cireșe, se utilizează metoda backtracking pentru a obține toate posibilitățile de a forma platouri cu 
    câte trei tipuri de prăjituri diferite, știind că în cadrul unui platou nu contează ordinea de așezare a 
    prăjiturilor și că prăjiturile cu căpșune nu vor fi plasate pe același platou cu prăjiturile cu piersici. 
    Primele patru soluții obținute sunt, în această ordine: (caise, căpșune, prune), (caise, căpșune, 
    cireșe), (caise, prune, piersici), (caise, prune, cireșe). A șasea soluție generate este: 
    a. {caise, prune, căpșune} 
    b. {caise, piersici, cireșe} 
    c. {căpșune, prune, cireșe} 
    d. {prune, piersici, cireșe} 
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
    for (int i = 1; i < k; i++)
    {
        if (st[i] == st[k])
            return 0;
        if (st[i] == 2 && st[k] == 4)
            return 0;
        if (st[i] == 4 && st[k] == 2)
            return 0;
    }
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
    {
        if (i < 3)
            switch (st[i])
            {
                case 1:
                    printf ("caise, ");
                    break;
                case 2:
                    printf ("capsune, ");
                    break;
                case 3:
                    printf ("prune, ");
                    break;
                case 4:
                    printf ("piersici, ");
                    break;
                case 5:
                    printf ("cirese, ");
                    break;
            }
        if (i == 3)
            switch (st[i])
            {
                case 1:
                    printf ("caise");
                    break;
                case 2:
                    printf ("capsune");
                    break;
                case 3:
                    printf ("prune");
                    break;
                case 4:
                    printf ("piersici");
                    break;
                case 5:
                    printf ("cirese");
                    break;
            }
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
