#include <stdio.h>

int main ()
{
    int n, a[101], b[101], op1, op2, k, min = 10000, d = 2;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf ("%d", &b[i]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (b[j] < min && a[i] > b[j])
                min = b[j];
            if (b[j] == min)
            {
                while (a[i]%d == 0 &&
                        b[j]%d == 0)
                {
                    if (a[i]%d == 0)
                        op1 = a[i]/d;
                    if (b[j]%d == 0)
                        op2 = b[j]/d;
                    else d++;
                }
            }
        }
    return 0;
}
