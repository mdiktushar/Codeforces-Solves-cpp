#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int pos = s.find("8");
        if(pos == -1){
            cout<<"NO"<<endl;
        }
        else if(n-pos>=11)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
