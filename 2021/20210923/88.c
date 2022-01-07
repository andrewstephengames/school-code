#include <stdio.h>
#include <string.h>

FILE *palin, *palout;
palin = fopen ("palindrom.in", "r");
palout = fopen ("palindrom.out", "w");

char word[101];

int palindrom (char word[])
{
    int n;
    fscanf (palin, "%d", n);
    for (int i = 0; i < n; i++)
        fscanf (palin, "%s", word);
}
