#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    vector<lli>v;
    while(n--)
    {
        lli i;cin>>i;
        v.push_back(i);
    }
    sort(v.begin(),v.end());

    int f = v.front();
    int b = v.back();
    //cout<<f<<' '<<b<<endl;

    vector<int>r;
    for(auto i:v)
    {
        if(i!=f&&i!=b)
            r.push_back(i);
    }
    cout<<r.size()<<endl;

    return 0;
}
