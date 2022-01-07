#include <iostream>

using namespace std;

int cmmdc (int a, int b, int &r)
{
    if (a == b) r = a;
    if (a > b) r = cmmdc (a-b, b, r);
    else r = cmmdc (a, b-a, r);
}

int main ()
{
    int a, b, r;
    cin >> a >> b;
    cmmdc(a, b, r);
    cout << r;
    return 0;
}
