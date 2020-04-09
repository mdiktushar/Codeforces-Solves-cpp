#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int p=1;
    for(int i=0; i<n; i+=p){
        cout<<s[i];
        p++;
    }cout<<endl;

    return 0;
}
