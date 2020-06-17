#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v;cin>>n>>v;
    vector<int>res;
    for(int I=1; I<=n; I++)
    {
        int N;cin>>N;
        vector<int>ve;
        while(N--)
        {
            int i;cin>>i;
            ve.push_back(i);
        }
        sort(ve.begin(),ve.end());
        if(ve.front()<v)
            res.push_back(I);
    }
    cout<<res.size()<<endl;
    for(auto i:res)
        cout<<i<<' ';
    cout<<endl;

    return 0;
}
