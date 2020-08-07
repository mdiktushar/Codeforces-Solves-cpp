#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli x,y;cin>>x>>y;
        lli t1 = 0, t2 = 0;
        if(x==2 && y==3)
            cout<<"YES"<<endl;
        else if(x>y)
            cout<<"YES"<<endl;
        else if(x==y)
            cout<<"YES"<<endl;
        else if(x<=3)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
