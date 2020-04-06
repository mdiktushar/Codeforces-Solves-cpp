#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;cin>>n;
    for(int i=1; i<=n; i++){
        s += to_string(i);
    }
    cout<<s[n-1]<<endl;
    return 0;
}
