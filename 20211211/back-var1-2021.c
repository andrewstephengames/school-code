/*
    TODO: ultima solutie nu este printre variantele de raspuns

    3. Utilizând metoda backtracking se generează toate posibilitățile de a forma selecții de câte 4 piese ale soliștilor/formațiilor din mulțimea {„Bono”, „Bruce Springsteen”, „Bon Jovi”, „Leonard Cohen”, „Portugal.The Man”}, astfel încât pe oricare două poziții alăturate să nu se afle două piese ale soliștilor/formațiilor din submulțimea {„Bono”, „Bon Jovi”, „Portugal.The Man”}. Primele cinci selecții generate sunt, în această ordine,  („Bono”, „Bruce Springsteen”, „Bono”, „Bruce Springsteen”), („Bono”, „Bruce Springsteen”, „Bono”, „Leonard Cohen”), („Bono”, „Bruce Springsteen”, „Bruce Springsteen”, „Bono”), („Bono”, „Bruce Springsteen”, „Bruce Springsteen”, „Bruce Springsteen”), („Bono”, „Bruce Springsteen”, „Bruce Springsteen”, „Bon Jovi”). Ultima selecție generată este: 
a. („Portugal.The Man”, „Leonard Cohen”, „Portugal.The Man”, „Portugal.The Man”) 
b. („Portugal.The Man”, „Leonard Cohen”, „Portugal.The Man”, „Bruce Springsteen”) 
c. („Portugal.The Man”, „Leonard Cohen”, „Portugal.The Man”, „Leonard Cohen”) 
d. („Portugal.The Man”, „Leonard Cohen”, „Leonard Cohen”, „Portugal.The Man”) 
*/
#include <stdio.h>

int st[10];

void init (int k)
{
    st [k] = 0;
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
    if (st[k] == 1 && st[k-1] == 3)
        return 0;
    if (st[k-1] == 1 && st[k] == 3)
        return 0;
    if (st[k-1] == 1 && st[k] == 5)
        return 0;
    if (st[k-1] == 5 && st[k] == 1)
        return 0;
    if (st[k-1] == 5 && st[k] == 3)
        return 0;
    if (st[k-1] == 3 && st[k] == 5)
        return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return k == 4;
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
                    printf ("\"Bono\", ");
                    break;
                case 2:
                    printf ("\"Bruce Springsteen\", ");
                    break;
                case 3:
                    printf ("\"Bon Jovi\", ");
                    break;
                case 4:
                    printf ("\"Leonard Cohen\", ");
                    break;
                case 5:
                    printf ("\"Portugal.The Man\", ");
                    break;
            }
        if (i == 4)
            switch (st[i])
            {
                case 1:
                    printf ("\"Bono\"");
                    break;
                case 2:
                    printf ("\"Bruce Springsteen\"");
                    break;
                case 3:
                    printf ("\"Bon Jovi\"");
                    break;
                case 4:
                    printf ("\"Leonard Cohen\"");
                    break;
                case 5:
                    printf ("\"Portugal.The Man\"");
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
            ev = valid (k);
        } while (as && !ev);
        if (as)
            if (solutie(k))
                tipar();
            else
            {
                k++;
                init (k);
            }
        else k--;
    }
}

int main ()
{
    back (1);
    return 0;
}
