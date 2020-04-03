#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    vector<int>v;
    set<int> s;
    int c=0, f=0,i;
    while(t--){
        cin>>i;
        if(i==1)
            c++;
        if(i<=f)
            v.push_back(f);
        f=i;
    }v.push_back(i);
    cout<<c<<endl;
    for(auto it=v.begin(); it!=v.end(); it++)
        cout<<*it<<' ';
    cout<<endl;

    return 0;
}
