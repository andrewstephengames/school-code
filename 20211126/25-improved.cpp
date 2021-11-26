//TODO: fix no output
#include <iostream>
using namespace std;

int cmmnr (int n)
{
    int f[10], nr = 0;
    while (n)
    {
        f[n%10]++;
        n /= 10;
    }
    for (int i = 9; i > -1; i--)
        nr = (nr*10+i)*f[i];
    return nr;
}

int main ()
{
    cmmnr(12);
    return 0;
}
