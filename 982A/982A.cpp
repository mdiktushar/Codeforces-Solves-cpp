#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    string s;cin>>s;
    int a = s.find("11");
    int b = s.find("000");
    if(n==1&&s=="0")cout<<"No"<<endl;
    else if(s[0]=='0'&&s[1]=='0' && n>=3)
        cout<<"No"<<endl;
    else if(n>=3&& s[n-2]=='0'&&s[n-1]=='0')
        cout<<"No"<<endl;
    else if(n==2 && s[0]=='0'&& s[1]=='0')
        cout<<"No"<<endl;
    else if(a>-1 || b>-1)
        cout<<"No"<<endl;
    else cout<<"Yes"<<endl;


    return 0;
}
