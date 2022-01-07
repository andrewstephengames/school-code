#include <stdio.h>
#include <string.h>

char word[101];

int main ()
{
    fgets (word, 101, stdin);
    size_t n = strlen(word);
    for (size_t i = 0; i < n; i++)
    {   
        if (strchr ("aeiouAEIOU", word[i]))
        {
            for (size_t j = n-1; j > i; j--)
                word[j+1] = word[j];
            word[i+1] = word[i];
            n++; i++;
        }
    }
    fputs (word, stdout);
    return 0;
}
