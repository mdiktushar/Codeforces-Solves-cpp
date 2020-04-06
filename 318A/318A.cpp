#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    ll odd;
    if(n%2==0){
        odd = n/2;
    }
    else{
        odd = n/2+1;
    }
    if(k<=odd){
        cout<<k*2-1<<endl;
    }
    else{
        k -= odd;
        cout<<k*2<<endl;
    }

    return 0;
}
