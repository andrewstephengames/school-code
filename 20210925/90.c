//TODO: outputs the string at i+1 instead of the one at i
#include <stdio.h>
#include <string.h>

FILE *in, *out;

char word[255], outword[255], voc[] = "aeiou";

int main ()
{
    in = fopen ("vocmax.in", "r+");
    out = fopen ("vocmax.out", "w");
    int n, nr = 0, max = 0, maxi;
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fgets (word, 255, in);
        for (int j = 0; j < strlen(word); j++)
            if (strchr (voc, word[j])) nr++;
        if (nr > max)
        {
            max = nr;
            for (int i = 0; i < strlen(word); i++)
                outword[i] = word[i];
            outword[strlen(word)] = '\0';
        }
    }
    fputs (outword, out);
    fclose(in);
    fclose(out);
    return 0;
}
