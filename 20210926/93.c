#include <stdio.h>
#include <string.h>

FILE *in, *out;

char word[256], wordcp[256], maxp[256];
int n;

int main ()
{
    int max = 0, nr;
    in = fopen ("cuvmax.in", "r");
    out = fopen ("cuvmax.out", "w");
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fgets (word, 256, in);
        char *p;
        nr = 0;
        strcpy (wordcp, word);
        p = strtok (word, " ");
        while (p)
        {
            nr++;
            p = strtok (NULL, " ");
        }
        if (nr > max)
        {
            max = nr;
            strcpy (maxp, wordcp);
        }
    }
    fputs (maxp, out);
    return 0;
}
