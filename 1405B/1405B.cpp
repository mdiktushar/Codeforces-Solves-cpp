#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        lli arr[n];
        lli time = 0;
        lli sum = 0;
        while(n--)
        {
            lli i;cin>>i;
            if(i>=0)
                sum+=i;
            else if(i<0 && sum<abs(i))
            {
                i+=sum;
                time+=abs(i);
                sum = 0;
            }
            else if(i<0 && sum==abs(i))
            {
                sum=0;
            }
            else if(i<0 && sum>abs(i))
            {
                sum+=i;
            }
            //cout<<sum<<' '<<time<<endl;
        }
        cout<<time<<endl;

    }

    return 0;
}
