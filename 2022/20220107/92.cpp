#include <fstream>
using namespace std;

ifstream in ("proiecte.in");
ofstream out ("proiecte.out");

struct Proiect
{
    int t, o;
} a[1001], tmp;

int main ()
{
    int n;
//    Proiect a[1001];
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> a[i].t;
        a[i].o = i;
    }
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (a[i].t > a[j].t)
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    for (int i = 1; i <= n; i++)
        out << a[i].o << " ";
    return 0;
}
