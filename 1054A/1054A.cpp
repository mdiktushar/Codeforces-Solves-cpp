#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    int e = abs(x-z);
    int f = abs(x-y);
    t3*=3;
    int st = f*t1;
    e+=f;
    e*=t2;
    e+=t3;
    if(st>=e)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
