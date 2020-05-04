#include<bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    int t;cin>>t;
    while(t--){
        lli s,a,b,c;
        cin>>s>>a>>b>>c;
        lli temp1 = a*c;
        lli temp2 = s/temp1;
        lli res = a*temp2;
        res += temp2*b;
        temp2 = s%temp1;
        res += temp2/c;
        cout<<res<<endl;
    }

    return 0;
}
