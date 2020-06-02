#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<long long int>v;
    int t=0;
    while(n--)
    {
        int i;cin>>i;
        i+=t;
        v.push_back(i);
        t = i;
    }
    cin>>t;
    int js[t];
    for(int i=0; i<t; i++)
        cin>>js[i];
    for(int i=0; i<t; i++)
    {
        auto it = lower_bound(v.begin(),v.end(),js[i]);
        cout<<1+distance(v.begin(),it)<<endl;
    }

    return 0;
}
