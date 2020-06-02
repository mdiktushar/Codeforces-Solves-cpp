#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli a,b;cin>>a>>b;
    lli sum = a;
    lli t1,t2;
    while(true)
    {
        t1 = a/b;
        sum += t1;
        t2 = a%b;
        a = t1+t2;
        if(a<b)
            break;
    }
    cout<<sum<<endl;
    return 0;
}
