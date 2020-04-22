#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,b;cin>>n>>b;
        char c='a';
        for(int i=0; i<n; i++)
            cout<<char('a'+i%b);
        cout<<endl;
    }
    return 0;
}
