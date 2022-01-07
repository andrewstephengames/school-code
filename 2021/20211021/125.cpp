#include <algorithm>
#include <fstream>
using namespace std;

ifstream in("permutari2.in");
ofstream out("permutari2.out");

int n , x[10] , p[10] , a[10];
void afisare()
{
    for(int i = 1 ; i <= n ; i++)
        out << a[x[i]] << " ";
    out << '\n';
}
void back(int k)///k = poz la care am ajuns
{
    for(int i = 1 ; i <= n ; i++)///de unde se ia x[k]
        if(!p[i]) ///daca nu e pus anterior
        {
            x[k] = i;///pun elementul
            p[i] = 1;///l am folosit pe i
            if(k == n) afisare();///solutie
            else back(k + 1);///trec la poz urmatoare
            p[i] = 0;///marchez ca nefolosit
        }
}
int main()
{
    in >> n;
    for(int i = 1 ; i <= n ; i++)
        in >> a[i];
    sort(a + 1 , a + n + 1);
    back(1);///incep generarea de la 1
    return 0;
}
