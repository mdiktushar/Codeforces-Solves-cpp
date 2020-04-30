#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v;
    set<int>st;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
        st.insert(a);
    }

    int mx = INT_MIN;
    while(st.size()!=0){
        int c = count(v.begin(),v.end(),*st.begin());
        if(mx<c)
            mx=c;
        c--;
        n-=c;
        st.erase(st.begin());
    }
    cout<<mx<<' '<<n<<endl;

    return 0;
}
