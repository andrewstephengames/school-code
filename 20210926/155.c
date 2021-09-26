//TODO: fix shit algorithm
#include <stdio.h>
#include <string.h>

char s[51];
int a[51];

int main ()
{
    int j = 0, max = 0, maxi;
    fgets (s, 51, stdin);
    for (int i = 0; i < strlen(s); i++)
    {
/*
        if (s[i] >= '0' && s[i] <= '9')
        {
*/
            switch (s[i])
            {
                case '0': a[0]++;
                case '1': a[1]++;
                case '2': a[2]++;
                case '3': a[3]++;
                case '4': a[4]++;
                case '5': a[5]++;
                case '6': a[6]++;
                case '7': a[7]++;
                case '8': a[8]++;
                case '9': a[9]++;
            }
 //       }
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max) 
        {
            max = a[i];
            maxi = i;
        }
    }
    printf ("%d", maxi);
    return 0;
}
