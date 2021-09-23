#include <iostream>

using namespace std;

int a, b;

int cmmdc (int a, int b)
{
    if (a == b) return a;
    if (a > b) return cmmdc (a-b, b);
    else return cmmdc (a, b-a);
}

int main ()
{
    cin >> a >> b;
    cout << cmmdc(a,b);
    return 0;
}
