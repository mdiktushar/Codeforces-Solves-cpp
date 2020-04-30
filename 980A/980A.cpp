#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int l = count(s.begin(), s.end(), '-');
    int p = count(s.begin(), s.end(), 'o');
    if(p==0)cout<<"YES"<<endl;
    else if(l%p==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
