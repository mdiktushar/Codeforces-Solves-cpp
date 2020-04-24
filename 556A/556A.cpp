#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int z=0,o=0;
    string s;cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='0')z++;
        else o++;
    }
    cout<<n-2*min(o,z)<<endl;

    return 0;
}
