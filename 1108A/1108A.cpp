#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;cin>>t;
    while(t--){
        ll L1, r1, L2, r2;
        cin>>L1>>r1>>L2>>r2;
        if(L1==L2)
            cout<<L1<<' '<<L2+1<<endl;
        else cout<<L1<<' '<<L2<<endl;
    }

    return 0;
}
