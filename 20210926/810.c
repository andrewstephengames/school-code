#include <stdio.h>
#include <string.h>

int nr;
char word[71];

int main ()
{
    int temp;
    fgets (word, 71, stdin);
    char *p;
    p = strtok (word, " ");
    while (p)
    {
        temp = 0;
        for (size_t i = 0; i < strlen(p); i++)
            if (p[i] == 'a') temp++;
        if (temp > 0) nr++;
        p = strtok (NULL, " ");
    }
    printf ("%d", nr);
    return 0;
}
