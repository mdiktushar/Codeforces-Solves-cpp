#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;cin>>t;
        int d =0;
        for(int j=0; j<t; j++){
            long x;cin>>x;
            d += x;
        }
        cout<<(d+t-1)/t<<endl;
    }

    return 0;
}
