//TODO: bad output
#include <stdio.h>
#include <string.h>

char word[101], wordcp[101], newword[101];

int litImp (char word[])
{
    return (strlen(word)%2);
}

int main ()
{
    size_t j = 0;
    fgets (word, 101, stdin);
    strcpy (wordcp, word);
    char *p;
    p = strtok (word, " ");
    while (p)
    {
        if (litImp(p))
            for (size_t i = 0; i < strlen(p); i++)
            {
                if (i != strlen(p)/2)
                {   
                    newword[j] = p[i];
                    j++;
                }
            }
        if (strcmp (wordcp, newword) != 0)
            printf ("%s ", newword);
        else printf ("nu exista");
        p = strtok (NULL, " ");
    }
    return 0;
}
