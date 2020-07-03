#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli x,y;cin>>x>>y;
    if(y==0||(x==y))
    {
        cout<<"no"<<endl;
        return 0;
    }
    y--;
    x-=y;
    if(y==0&&x>0)
    {
        cout<<"no"<<endl;
        return 0;
    }
    if(x%2==0&&x>-1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;


    return 0;
}
