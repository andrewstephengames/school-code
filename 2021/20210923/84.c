#include <stdio.h>
#include <string.h>

char word[11], voc[] = "AEIOUaeiou";
int convocCheck;

int main ()
{
    char aux;
    scanf ("%s", word);
    for (int i = 0; i < strlen (word); i++)
        if (strchr (voc, word[i]))
            convocCheck++;
    for (int i = 0; i < strlen (word); i++)
    {
        if (strchr (voc, word[0]) && !(strchr(voc, word[n-1])))
        {
            aux = word[0];
            word[0] = word[n-1];
            word[n-1] = aux;
        }
    }
    if (convocCheck == strlen(word) || convocCheck == 0)
        printf ("IMPOSIBIL");
    else printf ("%s", word);
    return 0;
}
