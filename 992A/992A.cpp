#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    set<int>st;
    while(n--){
        int i;cin>>i;
        if(i==0)continue;
        st.insert(i);
    }
    cout<<st.size()<<endl;

    return 0;
}
