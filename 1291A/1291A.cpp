#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string r;
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if((s[i]-'0')%2!=0)
                r.push_back(s[i]);
            if(r.size()==2)break;
        }
        if(r.size()==2)
            cout<<r<<endl;
        else cout<<-1<<endl;
    }
}
