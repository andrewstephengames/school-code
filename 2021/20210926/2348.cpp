//TODO: only 60 points
#include <iostream>
#include <string.h>

using namespace std;

char word[201];
int s, nr;

int bun (char n)
{
    if (islower(n) && n != ' ' &&
        !strchr ("aeiou", n))
        return 1;
    else return 0;
}

int main ()
{
    char med;
    fgets (word, 201, stdin);
    for (size_t i = 0; i < strlen (word); i++)
    {
        if (bun(word[i]))
        {
            s += int (word[i]);
            nr++;
        }
    }
    med = s/nr;
    if (med = ' ' || isupper(med) ||
        strchr ("AEIOU", med))
        printf ("%c", char(s/nr));
    return 0;
}
