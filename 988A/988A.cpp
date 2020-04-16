#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    vector<int> v;
    set<int>st;
    while(n--){
        int i;cin>>i;
        v.push_back(i);
        st.insert(i);
    }
    if(st.size()>=k){
        cout<<"YES"<<endl;
        for(auto i: st){
            if(k==0)break;
            auto p = find(v.begin(), v.end(), i);
            int r=p-v.begin();
            cout<<++r<<' ';
            k--;
        }cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
