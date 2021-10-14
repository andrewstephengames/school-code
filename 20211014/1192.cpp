//TODO
#include <iostream>
#include <fstream>
using namespace std;
ifstream in ("arhitectura2.in");
ofstream out ("arhitectura2.out");

int v[500001];

int main ()
{
    int n, aux, ord;
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    do
    {
        ord = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ord = 0;
            }
        }
    } while (!ord);
    for (int i = 1; i <= n; i++)
        out << v[i] << " ";
    out << "\n";
    for (int i = 1; i <= n; i++)
    {
        if ((v[i-1]+v[i+1]) == 2*v[i])
            out << 1 << " ";
        else out << 0 << " ";
    }
    in.close ();
    out.close ();
    return 0;
}
