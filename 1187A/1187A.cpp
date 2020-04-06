#include<bits/stdc++.h>
using namespace std;

int main()
{

    int T;cin>>T;
    while(T--){
        int n,s,t;
        cin>>n>>s>>t;
        cout<<max(n-t,n-s)+1<<endl;
    }
    return 0;
}
