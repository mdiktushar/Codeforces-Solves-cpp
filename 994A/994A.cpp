#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector<int>v1,v2;
    while(n--)
    {
        int i;cin>>i;
        v1.push_back(i);
    }
    while(m--)
    {
        int i;cin>>i;
        v2.push_back(i);
    }
    for(int i=0; i<v1.size(); i++)
    {
        auto f = find(v2.begin(), v2.end(), v1[i]);
        if(f!=v2.end())
            cout<<v1[i]<<' ';
    }
    cout<<endl;
    return 0;
}
