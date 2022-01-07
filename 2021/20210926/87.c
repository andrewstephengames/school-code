#include <string.h>
#include <stdio.h>

FILE *in, *out;

char word[256], pmax[256];
int n;

int main ()
{
    size_t max = 0;
    in = fopen("lgmax.in", "r");
    out = fopen("lgmax.out", "w");
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fgets (word, 256, in);
        if (strlen(word) > max)
        {
            max = strlen(word);
            strcpy (pmax, word);
        }
    }
    fputs (pmax, out);
    return 0;
}
