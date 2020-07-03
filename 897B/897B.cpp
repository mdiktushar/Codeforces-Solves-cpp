#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,p;cin>>n>>p;
    lli sum=0;
    for(lli j=n; j>0; j--)
    {
        lli i=j;
        lli temp = i;
        while(temp>0)
        {
            i*=10;
            i+=(temp%10);
            temp/=10;
        }
        sum+=i;
    }
    cout<<sum%p<<endl;
}
