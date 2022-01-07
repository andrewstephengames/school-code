//TODO: doesnt count last word
#include <stdio.h>
#include <string.h>

char word[151];
int nr;

int main ()
{
    fgets (word, 151, stdin);
    char *p;
    p = strtok (word, " ");
    while (p)
    {
        if (strchr ("aeiouAEIOU", p[0]) &&
            strchr ("aeiouAEIOU", p[strlen(p)-1]))
        {
            nr++;
        }
        p = strtok (NULL, " ");
    }
    printf ("%d", nr);
    return 0;
}
