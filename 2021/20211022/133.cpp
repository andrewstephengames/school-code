#include <iostream>
#include <string.h>
using namespace std;

size_t m, n;

int main ()
{
    char nume[21], prenume[21], rez[50];
    fgets (nume, 21, stdin);
    fgets (prenume, 21, stdin);
    for (size_t i = 0; i < strlen (prenume); i++)
        if (!strchr ("aeiou", prenume[i]))
        {
            rez[m] = prenume[i];
            m++;
        }
    rez[m+1] = ' ';
    strcat (rez, nume);
    fputs (rez, stdout);
    return 0;
}
