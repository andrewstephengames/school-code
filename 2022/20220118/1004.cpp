#include <fstream>
using namespace std;
ifstream in ("eureni.in");
ofstream out ("eureni.out");

int main ()
{
    int s, n, e, a[11], nr = 0, k;
    in >> s >> n >> e;
    a[0] = 1;
    for (int i = 1; i <= n; i++)
        a[i] = a[i-1]*e;
    for (int i = n; i >= 0 && s > 0; i--)
    {
        k = s/a[i];
        if (k > 0)
            out << a[i] << " " << k << endl;
        s -= a[i]*k;
        nr += k;
    }
    out << nr;
    in.close();
    out.close();
    return 0;
}
