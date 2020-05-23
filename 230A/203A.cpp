#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    int st;cin>>st;
    int n;cin>>n;
    while(n--)
    {
        pair<int, int>p;
        cin>>p.second>>p.first;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    while(v.size()>0)
    {
        auto it = v.begin();
        for(; it!=v.end(); it++)
        {
            if(st>(*it).second){
                st+=(*it).first;
                break;
            }
        }
        if(it==v.end())
        {
            cout<<"NO"<<endl;
            return 0;
        }
        v.erase(it);
    }
    cout<<"YES"<<endl;

    return 0;
}
