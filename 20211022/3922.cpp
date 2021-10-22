#include <iostream>
using namespace std;
int n, st[12],m;
char v[26];

void init (int k)
{
    st[k]=st[k-1];
}
int succesor(int k)
{
    if(st[k]<n-m+k)
     {
         st[k]++;
         return 1;
     }
     else
        return 0;
}
int valid(int k)
{

    return 1;       
}
int solutie(int k)
{
    if(k==m)
      return 1;
    else
      return 0;
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
    st[1]=0;
    while(k>0)
    {
        do
        {
            as=succesor(k);
            ev=1;      
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
