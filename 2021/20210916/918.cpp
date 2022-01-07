#include <iostream>

using namespace std;

void sumcif (int n, int &s)
{
    s = 0;
    if (n == 0) s = 0;
    else s = n%10+sumcif (n/10, s);
}

int main ()
{
    int n, s;
    cin >> n >> s;
    sumcif (n, s);
    cout << s;
    return 0;
}
