#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int one=0,two=0;
    while(n--)
    {
        int i;cin>>i;
        if(i==1)
            one++;
        else two++;
    }
    if(one==0)
        cout<<0<<endl;
    else if(two==0)
        cout<<one/3<<endl;
    else if(two==one)
        cout<<two<<endl;
    else if(two>one)
        cout<<one<<endl;
    else
    {
        int ans = two;
        one-=two;
        one/=3;
        ans+=one;
        cout<<ans<<endl;
    }

    return 0;
}
