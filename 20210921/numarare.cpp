#include <iostream>
int main ()
{
    int n,a[201],k=0,r,x,y;
    std::cin>>n;
    for (int i=1;i<=n;i++)
        std::cin>>a[i];
    for (int i=1;i<=n/2;i++)
        {
        x=a[i];
        y=a[n+1-i];
        do
        {
            r=x%y ,x=y,y=r;
        } while (r);
        if (x==1)
            k++;
        }
    std::cout<<k;
    return 0;
}

