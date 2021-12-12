/*
    TODO: segfault
    3. Utilizând metoda backtracking, se generează toate numerele impare de cel mult trei cifre din mulţimea 
    {0, 1, 2, 3}. Primele 8 soluţii generate sunt, în această ordine: 1, 101, 103, 11, 111, 113, 121, 123. 
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = -1;
}

int succesor (int k)
{
    if (st[k] < 3)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    int ok = 0;
    if (k == 1 && st[k] == 0)
        return 0;
    if (k == 3)
        if (st[k-2] == 3 && st[k-1] == 3 && st[k] == 3)
        {
            ok++;
            return ok > 1;
        }
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    int k = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (k-st[i] == 0)
            break;
        printf ("%d", st[i]);
        k++;
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
            tipar();
        else
        {
                k++;
                init(k);
        }
//        else k--;
    }
}

int main ()
{
    back (1);
    return 0;
}
