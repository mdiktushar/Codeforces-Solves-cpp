#include<bits/stdc++.h>
#define lli long long
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        double x;
        lli n;cin>>n>>x;
        lli sum = 0;
        double arr[n];
        lli ans1 = 0, ans2 = 0;
        for(lli i = 0; i<n; i++)
        {
            cin>>arr[i];
            sum += arr[i];

        }
        ans1 = ceil(sum/x);
        for(int i=0; i<n; i++)
        {
            //cout<<ceil(arr[i]/x)<<endl;
            ans2 += ceil(arr[i]/x);
        }
        cout<<ans1<<' ';
        cout<<ans2<<endl;

    }

    return 0;
}
