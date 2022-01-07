/*
    TODO: 100% cpu usage
    Utilizand metoda backtracking s genereaza toate numerele palindrom formate din 4 cifre din multimea {1, 2, 3}. Numerele generate sunt 1111, 1221, 1331, 2112, 2222, 2332, 3113, 3223, 3333. Daca se foloseste aceeasi metoda pentru generarea palindroamelor de 4 cifre din multimea {1, 2, ... ,9}, sa se determine cate numere palindrom se vor genera si cate dintre aceste numere sunt pare?
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
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

/*
int valid (int k)
{
    if (k == 4)
        if (st[k] != st[k-3] || st[k-1] != st[k-2])
            return 0;
    return 1;
}
*/

int valid (int k)
{
    if (k == 3)
        if (st[k-1] != st[k])
            return 0;
    if (k == 4)
        if (st[k] != st[k-3])
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

int main ()
{
    back (1);
    return 0;
}
