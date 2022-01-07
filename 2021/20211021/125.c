#include <stdio.h>

FILE *in, *out;
int a[10], st[10], n;

void citire ()
{
    fscanf (in, "%d", &n);
    for (int i = 1; i <= n; i++)
        fscanf (in, "%d", &a[i]);
}

void init (int k)
{
    st[k] = 0;
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[st[i]]);
    fprintf (out, "\n");
}

int solutie (int k)
{
    return n == k;
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
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
            return 0;
    return 1;
}

void back (int k)
{
    int suc, val;
    while (k > 0)
    {
//        afisare();
        do
        {
            suc = succesor(k);
            if (suc) val = valid(k);
        } while (suc && !val);
        if (suc)
            if (solutie(k)) afisare();
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
    int aux;
    in = fopen ("permutari2.in", "r");
    out = fopen ("permutari2.out", "w");
    citire ();
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    }
    back(1);
    fclose (in);
    fclose (out);
    return 0;
}
