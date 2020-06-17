#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    set<int>st;
    vector<int>v1,v2,r;
    pair<set<int>::iterator,bool>p;
    while(n--)
    {
        int i;cin>>i;
        v1.push_back(i);
        v2.push_back(i);
    }
    sort(v2.begin(),v2.end());
    while(v2.size()!=0)
    {
        k-=v2.front();
        if(k<0)
            break;
        auto f = find(v1.begin(),v1.end(),v2.front());
        int d = distance(v1.begin(),f)+1;

        p = st.insert(d);

        while(p.second==false)
        {
            f = find(f+1,v1.end(),v2.front());
            d = distance(v1.begin(),f)+1;
            p=st.insert(d);
        }

        v2.erase(v2.begin());
    }
    cout<<st.size()<<endl;
    for(auto i:st)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
