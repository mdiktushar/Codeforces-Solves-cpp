#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string arr; cin>>arr;
        ll r = 0,a=0,f=0;
        for(ll i=0; i<n; i++){
            if(arr[i] == 'A')f++;
            if(f>0 && arr[i] == 'P'){
                a++;
            }
            if(f>0 && arr[i] == 'A'){
                if(a>r)r=a;
                a=0;
            }
            if(f>0 && i == n-1){
                if(a>r)r=a;
                a=0;
            }
        }cout<<r<<endl;
    }
    return 0;
}
