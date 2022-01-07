/*
    2. Un atelier de croitorie trebuie sa coase steaguri tricolore avand panza de culorile alb, albastru, galben, portocaliu, rosi si verde. Doua steaguri sunt diferite daca ordinea culorilor este diferita; intr-un steag culorile nu se repeta. Primele trei steaguri construite sunt: alb, albastru, galben; alb, albastru, portocaliu; alb, albastru, rosu. In cate moduri poate combina cele trei culori (numarul de steaguri distincte care se pot coase) si care este ultimul steag obtinut?
    numarul de combinari = 20
    ultima solutie = portocaliu, rosu, verde;
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 6)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    if (st[k] < st[k-1])
        return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return 3 == k;
}

void tipar ()
{
    for (int i = 1; i <= 3; i++)
    {
        if (i < 3)
            switch (st[i])
            {
                case 1:
                    printf ("alb, ");
                    break;
                case 2:
                    printf ("albastru, ");
                    break;
                case 3:
                    printf ("galben, ");
                    break;
                case 4:
                    printf ("portocaliu, ");
                    break;
                case 5:
                    printf ("rosu, ");
                    break;
                case 6:
                    printf ("verde, ");
                    break;
            }
        if (i == 3)
            switch (st[i])
            {
                case 1:
                    printf ("alb");
                    break;
                case 2:
                    printf ("albastru");
                    break;
                case 3:
                    printf ("galben");
                    break;
                case 4:
                    printf ("portocaliu");
                    break;
                case 5:
                    printf ("rosu");
                    break;
                case 6:
                    printf ("verde");
                    break;
            }
    }
    printf (";\n");
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
