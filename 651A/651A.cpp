#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;cin>>a>>b;
    int t=0;
    while(a>0 && b>0)
    {
        if(a==1&&b==1)
            break;
        if(a>b)
        {
            a-=2;b++;
        }
        else
        {
            b-=2;a++;
        }
        //cout<<a<<' '<<b<<endl;
        t++;
    }
    cout<<t<<endl;
}
