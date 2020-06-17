#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli a,b,c;
    cin>>a>>b>>c;
    if(c==0&& a==b)
        cout<<"YES"<<endl;
    else if(c==0)cout<<"NO"<<endl;
    else if((b-a)%c==0 && (b-a)/c>=0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
