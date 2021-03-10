#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        vector<int>v;
        int n,k;cin>>n>>k;
        for(int i=k+1; i<=n; i++)
            v.push_back(i);
        for(int i=(k+1)/2; i<k; i++)
            v.push_back(i);
        cout<<v.size()<<endl;
        for(auto i:v)
            cout<<i<<' ';
        cout<<endl;
    }

    return 0;
}
