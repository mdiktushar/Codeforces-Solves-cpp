#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli x,y,s;
    cin>>x>>y>>s;
    lli a = abs(x)+abs(y);
    lli t = s-a;
    if((a<s && t%2!=0) || s<a)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}
