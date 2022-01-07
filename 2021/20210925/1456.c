#include <stdio.h>
#include <string.h>

char word[101], voc[] = "aeou";
int conCount, vocCount, ic, icCheck;

int main ()
{
    scanf ("%s", word);
    for (int i = 0; i < strlen (word); i++)
    {
        if (word[i] == 'i') ic++;
        if (!strchr(voc, word[i])) conCount++;
        else vocCount++;
    }
    if (ic == strlen(word)) printf ("NU"), icCheck = 1;
    if (conCount == strlen(word) && !icCheck) printf ("DA");
    if (vocCount > 0) printf ("NU");
    return 0;
}
