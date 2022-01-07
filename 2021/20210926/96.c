//TODO: should work but it doesnt
#include <stdio.h>
#include <string.h>

char word[256], wordbackup[256], wordcp[256], sep[] = " :;.,";

int palindrom (char word[])
{
    size_t nr = 0, m;
    for (size_t i = 0; i < strlen(word); i++)
        for (size_t j = strlen(word)-1; j > -1; j--)
        {
            if (word[i] == word[j]) 
            {
                nr++;
            }
            i++; m = i;
        }
    if (nr == m) return 1;
    return 0;
}

int main ()
{
    size_t max = 0, no;
    fgets (word, 256, stdin);
    char *p;
    strcpy (wordbackup, word);
    p = strtok (word, sep);
    while (p)
    {
        no = 0;
        if (palindrom(p))
        {
            no += strlen(p);
        }
        if (no > max)
        {
            max = no;
            strcpy (wordcp, wordbackup);
        }
        p = strtok (NULL, sep);
    }
    fputs (wordcp, stdout);
    printf ("\n%d\n", no);
    return 0;
}
