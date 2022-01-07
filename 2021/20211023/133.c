#include <stdio.h>
#include <string.h>

size_t m;

int main ()
{
    char nume[21], prenume[21], s[42];
    scanf ("%s %s", nume, prenume);
    for (size_t i = 0; i < strlen(prenume); i++)
        if (!strchr("aeiouAEIOU", prenume[i]))
        {
            s[m] = prenume[i];
            m++;
        }
    s[strlen(s)] = ' ';
    strcat (s, nume);
    fputs (s, stdout);
    return 0;
}
