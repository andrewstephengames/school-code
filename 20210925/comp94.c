#include <stdio.h>
#include <string.h>

char word[21];

int main ()
{
    scanf ("%s", word);
    int n = strlen(word);
    for (int i = 0; i < n; i++)
    {
        if (strchr ("aeiou", word[i]))
        {
            for (int j = i+1; j < n; j++)
                word[j-1] = word[j];
            n--; i++;
        }
    }
    for (int i = 0; i < n; i++)
        printf ("%c", word[i]);
    return 0;
}
