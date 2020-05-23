#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli sum1=0,sum2=2,sum3=1;
        lli n;cin>>n;
        sum1 = (n*(n+1))/2;
        while(true)
        {
            if(sum2>n)
                break;
            sum3+=sum2;
            sum2=sum2*2;
        }
        cout<<sum1-sum3*2<<endl;
    }
    return 0;
}
