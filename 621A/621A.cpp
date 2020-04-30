#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli mi = LONG_MAX;
    lli sum=0, n;cin>>n;
    while(n--){
        lli a;cin>>a;
        sum+=a;
        if(a%2!=0 && mi>a)
            mi=a;
    }
    if(sum%2!=0)
        cout<<sum-mi<<endl;
    else cout<<sum<<endl;

}
