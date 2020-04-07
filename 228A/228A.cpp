#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    int n=4;
    while(n--){
        int i;cin>>i;
        st.insert(i);
    }
    cout<<4-st.size()<<endl;
}
