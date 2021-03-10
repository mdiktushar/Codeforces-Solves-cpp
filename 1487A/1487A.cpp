#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        int p = a[0];
        int c = count(a,a+n,p);
        cout<<n-c<<endl;
    }
    return 0;
}
