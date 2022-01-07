#include <stdio.h>
#include <string.h>
#include <ctype.h>

char word[256];

int main ()
{
    fgets (word, 256, stdin);
    for (int i = 0; i < strlen(word); i++)
        if (islower(word[i]))
            printf ("%c ", word[i]);
    return 0;
}
