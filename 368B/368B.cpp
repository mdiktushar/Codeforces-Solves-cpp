#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int k;cin>>k;
        v.push_back(k);
    }
    reverse(v.begin(), v.end());
    int arr[n];
    set<int>st;
    int j=0;
    for(int i=n-1; i>-1; i--)
    {
        st.insert(v[j++]);
        arr[i] = st.size();
    }
    while(m--)
    {
        int i;cin>>i;
        cout<<arr[i-1]<<endl;
    }

    return 0;
}
