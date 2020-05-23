#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n%3==0||n%7==0||(n%7)%3==0||(n%3==1 && n>6)||(n%3==2&&n>12))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
