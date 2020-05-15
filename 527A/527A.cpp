#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli a,b;cin>>a>>b;
    lli ans = 0;
    while(a!=0 && b!=0)
    {
        if(a>=b)
        {
            ans+=a/b;
            a%=b;
            //cout<<"a: "<<a<<endl;
        }
        else
        {
            ans+=b/a;
            b%=a;
            //cout<<"b: "<<b<<endl;
        }
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;

    return 0;
}
