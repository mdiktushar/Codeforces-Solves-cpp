#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    set<int> st;
    while(n--){
        int N; cin>>N;
        while(N--){
            int i;cin>>i;
            st.insert(i);
        }
    }
    if(st.size()==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
