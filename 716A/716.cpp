#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;cin>>n;
    ll t;cin>>t;
    vector<ll>v;
    int i;cin>>i;
    v.push_back(i);
    n--;
    while(n--){
        cin>>i;
        auto it1 = v.end()-1;
        if(i-*it1>t)
            v.erase(v.begin(),v.end());
        v.push_back(i);
    }
    cout<<v.size()<<endl;

    return 0;
}
