#include <stdio.h>
#include <string.h>

char word[255], voc[] = "aeiou";

int hasVowel (char word[])
{
    int nr = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (!strchr (voc, word[i]))
            nr++;
    }
    if (nr == strlen(word)) return 0;
    return 1;
}

int main ()
{
    fgets (word, 255, stdin);
    int n = strlen(word);
    if (!hasVowel(word)) 
    {
        printf ("FARA VOCALE");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (strchr (voc, word[i]))
        {
            for (int j = n-1; j > i; j--)
                word[j+1] = word[j];
            word[i+1] = '*';
            n++; i++;
        }
    }
    printf ("%s", word);
}
