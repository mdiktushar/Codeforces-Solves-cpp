#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    set<int>st;
    while(n--)
    {
        int i;
        cin>>i;
        st.insert(i);
    }
    vector<int>v;
    for(auto i:st)
        v.push_back(i);

    int mx = *max_element(v.begin(),v.end());
    int mi = *min_element(v.begin(),v.end());

    if(v.size()>3)
        cout<<-1<<endl;
    else if(v.size()==3){
        if(v[1]-v[0]==v[2]-v[1])
            cout<<v[1]-v[0]<<endl;
        else
            cout<<-1<<endl;
    }
    else
    {
        if((mx-mi)%2==0)
            cout<<(mx-mi)/2<<endl;
        else cout<<mx-mi<<endl;
    }

    return 0;
}
