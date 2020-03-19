#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        if(n<k){
            long long c = k/2;
            if(n<=c)cout<<n<<endl;
            else{
                cout<<c<<endl;
            }
        }
        else{
            long long c = n/k;
            long long r = k*c;
            n = n-r;
            long long d = k/2;
            if(d>n)r = r+n;
            else r = r+d;
            cout<<r<<endl;
        }
    }

    return 0;
}
