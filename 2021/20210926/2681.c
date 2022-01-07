//TODO: puts last word on a newline
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char word[256], strB[256];

char* oglindit (char word[])
{
    int j = 0;
    char *ogl = malloc (sizeof (char) * 256);
    for (int i = strlen(word)-1; i > -1; i--)
    {
        ogl[j] = word[i];
        j++;
    }
    return ogl;
}

void cuvant (char word[])
{
    char *p;
    int max = 0;
    p = strtok (word, " ");
    while (p)
    {
        if (strlen(p) > max)
        {
            max = strlen(p);
        }
        if (max == strlen(p))
        {
            fputs (oglindit(p), stdout);
            fputc (' ', stdout);
        }
        if (strlen(p) < max)
        {
            fputs (p, stdout);
            fputc (' ', stdout);
        }
        p = strtok (NULL, " ");    
    }
}


int main ()
{
    fgets (word, 256, stdin);
    cuvant (word);
    return 0;
}
