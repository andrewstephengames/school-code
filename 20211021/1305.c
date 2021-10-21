#include <stdio.h>

int main ()
{
    int a, b, r;
    char op;
    scanf ("%d %d %c", &a, &b, &op);
    switch (op)
    {
        case '+':
            r = a+b;
            break;
        case '-':
            if (a > b)
                r = a-b;
            else r = b-a;
            break;
        case '*':
            r = a*b;
            break;
        case '/':
            if (a > b)
                r = a/b;
            else r = b/a;
            break;
    }
    printf ("%d", r);
    return 0;
}
