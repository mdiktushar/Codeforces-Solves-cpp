#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int>st;

        while(n--){
            int i;cin>>i;
            st.insert(i);
        }
        n = st.size();

        vector<int>v;
        for(auto i:st)
            v.push_back(i);
        bool flag = true;
        for(int i=0; i<n-1; i++)
        {
            if(abs(v[i]-v[i+1])>1)
            {
                flag = false;
                break;
            }
        }
        if(flag == false)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
