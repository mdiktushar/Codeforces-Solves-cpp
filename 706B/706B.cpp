#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    vector<lli>v;
    while(n--)
    {
        int i;cin>>i;
        v.push_back(i);
    }
    n = v.size();
    sort(v.begin(),v.end());
    int q;cin>>q;
    while(q--)
    {
        int i;cin>>i;
        if(i<v.front())
            cout<<0<<endl;
        else
        {


            auto it = upper_bound(v.begin(),v.end(),i);
            if(*it==i)
                it++;
            cout<<distance(v.begin(),it)<<endl;
        }
    }

    return 0;
}
