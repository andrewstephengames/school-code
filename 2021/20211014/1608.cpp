#include <iostream>
#include <fstream>

using namespace std;

ifstream in ("sortare_divizori.in");
ofstream out ("sortare_divizori.out");

int nr_div (int x)
{
    int nr = 2, d;
    if (x == 1) return 1;
    for (int d = 2; d*d < x; d++)
        if (x%d == 0)
            nr += 2;
    if (d*d == x)
        nr++;
    return nr;
}

int main ()
{
    int n, v[1001], a[1001], aux;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        a[i] = nr_div(v[i]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            if (a[i] == a[j])
            {
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
    }
    
    for (int i = 1; i <= n; i++)
        out << v[i] << " ";
    in.close();
    out.close();
    return 0;
}
