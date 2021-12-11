/*
        ( 0 1 0 0 1 )
        ( 1 0 0 0 1 )
    A = ( 0 0 0 0 0 )
        ( 0 0 0 0 1 )
        ( 1 1 0 1 0 )
*/
#include <stdio.h>

int main ()
{
    int a[6][6];
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 && j == 2)
                a[i][j] = 1;
            if (i == 1 && j == 5)
                a[i][j] = 1; 
            if (i == 4 && j == 5)
                a[i][j] = 1; 
            if (i == 5 && j == 1)
                a[i][j] = 1; 
            if (i == 5 && j == 2)
                a[i][j] = 1; 
            if (i == 5 && j == 4)
                a[i][j] = 1; 
            else a[i][j] = 0; 
        }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            printf ("%d ", a[i][j]);
        printf ("\n");
    }
    return 0;
}
