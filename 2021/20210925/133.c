#include <stdio.h>
#include <string.h>

char nume[21], prenume[21], s[65];

int main ()
{
    int j = 0;
    scanf ("%s %s", nume, prenume);
    for (int i = 0; i < strlen(prenume); i++)
        if (!strchr("aeiouAEIOU", prenume[i]))
        {
            s[j] = prenume[i];
            j++;
        }
    s[j] = ' ';
    j++;
    for (int i = 0; i < strlen(nume); i++)
        if (nume[i] != ' ')
        {
            s[j] = nume[i];
            j++;
        }
    printf ("%s", s);
    return 0;
}
