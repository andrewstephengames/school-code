//TODO: find better way of conversion
#include <stdio.h>
#include <string.h>

char n[15];
int newNum;

int main ()
{
    scanf ("%s", n);
    for (int i = strlen(n)-1; i > -1; i--)
    {
        switch (n[i])
        {
            case '0': newNum *= 16+16;
            case '1': newNum *= 16+1;
            case '2': newNum *= 16+2;
            case '3': newNum *= 16+3;
            case '4': newNum *= 16+4;
            case '5': newNum *= 16+5;
            case '6': newNum *= 16+6;
            case '7': newNum *= 16+7;
            case '8': newNum *= 16+8;
            case '9': newNum *= 16+9;
            case 'A': newNum *= 16+10;
            case 'B': newNum *= 16+11;
            case 'C': newNum *= 16+12;
            case 'D': newNum *= 16+13;
            case 'E': newNum *= 16+14;
            case 'F': newNum *= 16+15;

        }
    }
    printf ("%d", newNum);
    return 0;
}
