#include <fstream>
using namespace std;
ifstream in ("plopi2.in");
ofstream out ("plopi2.out");

int main ()
{
    int n, a[101];
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    return 0;
}
