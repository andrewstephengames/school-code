#include <iostream>

using namespace std;

void cmmdc (int &a, int &b)
{
    int r;
    do {
        r = a%b;
        a = b;
        b = r;
    } while (r);
}

int main ()
{
    int a, b;
    cin >> a >> b;
    cmmdc (a, b);
    cout << a;
    return 0;
}
