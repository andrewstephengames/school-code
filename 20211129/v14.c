#include <stdio.h>
#include <string.h>

int st[10];
char a[4] = "info";

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 4)
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
    return 4 == k;
}

void tipar ()
{
    for (int i = 1; i <= 4; i++)
        printf ("%c", a[st[i]-1]);
    printf ("\n");
}

void back (int k)
{
    int as, ev;
    init(k);
    while (k > 0)
    {
        do
        {
            as = succesor(k);
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
    char aux;
    for (size_t i = 0; i < strlen(a)-1; i++)
        for (size_t j = i+1; j < strlen(a); j++)
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    back(1);
    return 0;
}
