#include <iostream>

using namespace std;

int n, v[1001];

void citire ()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}

int main ()
{
    int ct = 1, sc = 1, c = 1, sd = 1, d = 1;
    citire ();
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[n])
            ct = 0;
        if (v[i] >= v[i+1])
            sc = 0;
        if (v[i] > v[i+1])
            c = 0;
        if (v[i] <= v[i+1])
            sd = 0;
        if (v[i] < v[i+1])
            d = 0;
    }
    if (ct) 
    {
        cout << "sir constant";
        return 0;
    }
    if (sc) 
    {
        cout << "sir strict crescator";
        return 0;
    }
    if (c) 
    {
        cout << "sir crescator";
        return 0;
    }
    if (sd) 
    {
        cout << "sir strict descrescator";
        return 0;
    }
    if (d) 
    {
        cout << "sir descrescator";
        return 0;
    }
    else 
    {
        cout << "sir neordonat";
        return 0;
    }
    return 0;
}
