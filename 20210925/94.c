#include <stdio.h>
#include <string.h>

char word[20];

int main ()
{
    scanf ("%s", &word);
    for (int i = 0; i < strlen(word); i++)
    {
        if (strchr("aeiou", word[i])) continue;
        else printf ("%c", word[i]);
    }
    return 0;
}
