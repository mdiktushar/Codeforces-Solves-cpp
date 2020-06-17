#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    set<int>st;
    vector<int>v;
    pair<set<int>::iterator,bool>p;
    while(n--)
    {
        int i;cin>>i;
        p = st.insert(i);
        if(p.second==false)
            v.push_back(i);
    }
    int sum = 0;
    while(v.size()!=0)
    {
        int temp = v.front();
        while(true)
        {
            temp++;
            sum++;
            p=st.insert(temp);
            if(p.second==true)
                break;
        }
        v.erase(v.begin());
    }
    cout<<sum<<endl;

    return 0;
}
