#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        string s;cin>>s;
        int r=0;

        for(int i= 0; i<n-1; i++) {
            if(s[i]=='0' && s[i+1]=='0')
                r+=2;
        }
        for(int i=0; i<n-2; i++) {
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
                r++;
        }
        cout<<r<<endl;
    }
    return 0;
}
