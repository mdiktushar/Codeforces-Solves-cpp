#include<bits/stdc++.h>
using namespace std;

int tmp = INT_MAX;

int main()
{
    int t;cin>>t;
    int sum=0;
    while(t--){
        int a,p;
        cin>>a>>p;
        tmp = min(p,tmp);
        sum+=(a*tmp);
    }
    cout<<sum<<endl;
    return 0;
}
