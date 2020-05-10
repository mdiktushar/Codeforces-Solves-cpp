#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    int x=0;
    lli sum=0;
    vector<int>v1,v2,res;
    set<int>st;
    while(n--)
    {
        int i;cin>>i;
        v1.push_back(i);
        st.insert(i);
    }

    for(auto i: st)
    {
        v2.push_back(i);
    }
    reverse(v2.begin(),v2.end());

    while(v2.size()!=0){
        for(int i=0; i<v1.size(); i++)
        {
            if(v2.front()==v1[i])
            {
                res.push_back(i+1);
                sum+=(v1[i]*x+1);
                x++;
            }
        }
        v2.erase(v2.begin());
    }

    cout<<sum<<endl;
    for(auto i:res)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
