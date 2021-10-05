#include <iostream>

using namespace std;

void cmmdc (int a, int b, int &r)
{
    if (a == b) r = a;
    if (a > b) cmmdc (a-b, b, r);
    if (b > a) cmmdc (a, b-a, r);
}

int main ()
{
    int a, b, r;
    scanf ("%d %d", &a, &b);
    cmmdc (a, b, r);
    printf ("%d", r);
    return 0;
}
