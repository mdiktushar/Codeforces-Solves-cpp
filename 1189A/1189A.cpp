#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int one = count(s.begin(), s.end(), '1');
    int zer = count(s.begin(), s.end(), '0');
    if(one!=zer)
        cout<<1<<endl<<s<<endl;
    else{
        cout<<2<<endl;
        cout<<s[0]<<' ';
        for(int i=1; i<n; i++)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
