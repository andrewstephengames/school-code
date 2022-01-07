//TODO: incorrect result
#include <stdio.h>
#include <string.h>

char word[11], voc [] = "aeiou";
int pvoc, ucon, aux;

int main ()
{
    scanf ("%s", word);

    for (int i = 0; i < strlen(word); i++)
        if (strchr(voc, word[i])) pvoc = i; break;
    for (int i = strlen (word)-1; i > -1; i--)
        if (!strchr(voc, word[i])) ucon = i; break;

    for (int i = 0; i < strlen(word); i++)
    {
        aux = word[pvoc];
        word[pvoc] = word[ucon];
        word[ucon] = aux;
    }
    printf ("%s", word);
    return 0;
}
