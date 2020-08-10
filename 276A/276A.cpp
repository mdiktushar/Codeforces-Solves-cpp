#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,t;cin>>n>>t;
    lli joy[n];
    for(lli i=0; i<n; i++)
    {
        lli a,b;cin>>a>>b;
        if(b>t)
        {
            a=a-(b-t);
        }
        joy[i]=a;
    }
    cout<<*max_element(joy,joy+n)<<endl;

    return 0;
}

