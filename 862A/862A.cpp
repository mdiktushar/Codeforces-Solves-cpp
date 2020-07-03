#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;cin>>n>>x;
    vector<int>v;
    while(n--)
    {
        int i;cin>>i;
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    int res = 0;
    auto f = find(v.begin(),v.end(),x);
    if(f!=v.end())
    {
        res++;
        if(x==v.back())
            v.pop_back();
        else
        {
            v.erase(f);
        }

    }

    for(int i=0; i<x; i++)
    {
        bool s = binary_search(v.begin(),v.end(),i);
        if(s==false)
            res++;
    }

    cout<<res<<endl;

    return 0;
}
