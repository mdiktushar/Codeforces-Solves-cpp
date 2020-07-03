#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    a = max(a,b);
    b=6;
    a--;
    a = 6-a;
    //cout<<a<<' '<<b<<endl;
    if(b%a==0)
    {
        b/=a;
        a=1;
    }
    if(a%2==0&&b%2==0)
    {
        a/=2;
        b/=2;
    }
    cout<<a<<'/'<<b<<endl;


    return 0;
}
