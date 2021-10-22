//TODO: no output
#include <iostream>
using namespace std;
int n, st[12],m;
char v[26];

void init (int k)
{
    st[k] = 0;
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
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
            return 0;       
    return 1;
}
int solutie(int k)
{
    return n == m;
}
void tipar()
{
    int i;
    char c;
    for(i=1;i<=m;i++)
        cout << v[st[i]];
    cout<<endl;
}
void back(int k)
{
    int as,ev;
    init (k);
    while(k>0)
    {
        do
        {
            as=succesor(k);
            if (as) ev = valid(k);
        }while(as && !ev);
        if(as)
          if(solutie(k))
            tipar();
          else
            {
                k++;
                init(k);
            }
        else
          k--;
    }
}
int main()
{
    for (int i = 1; i <= 26; i++)
    {
        v[i] = i+64;
    }
    cin>>n>>m;
    back(1);
    return 0;
}
