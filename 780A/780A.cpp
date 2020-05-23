#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v;
    n*=2;
    int res = 1;
    int m;cin>>m;
    v.push_back(m);n--;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        if(find(v.begin(),v.end(),m)==v.end())
        {
            v.push_back(m);

        }
        else
        {
            auto f = find(v.begin(),v.end(),m);
            v.erase(f);
        }
        int t = v.size();
        res = max(res,t);
    }
    cout<<res<<endl;

    return 0;
}
