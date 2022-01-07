#include <fstream>

using namespace std;

ifstream in ("permutari.in");
ofstream out ("permutari.out");

int n, st[10];

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
    {
        st[k]++;
        return 1;
    }
    else
        return 0;
}
int valid(int k)
{
    int i, ev=1;
    for(i=1;i<=k-1;i++)
        if(st[i]==st[k])
        ev=0;
     return ev;
}

int solutie(int k)
{
    if(k==n)
        return 1;
    else
        return 0;
}
void tipar()
{
    int i;
    for(i=1;i<=n;i++)
        out<<st[i]<<" ";
    out<<endl;
}
void back(int k)
{
    int as,ev;
    init(k);
    while (k>0)
    {
        do
        {
            as=succesor(k);
            if(as)
              ev=valid(k);
        } while (as && !ev);

        if (as)
            if (solutie(k))
                    tipar();
            else
            {
                k++;
                init(k);
            }
            else k--;
    }

}
int main()
{
    int i,j,aux;
    in >> n;
    back(1);
    return 0;
}
