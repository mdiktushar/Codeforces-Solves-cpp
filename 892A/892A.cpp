#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    lli sum=0;
    for(lli i=0; i<n; i++)
    {
        lli t;cin>>t;
        sum+=t;
    }
    lli arr[n];
    for(lli i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[n-1]+arr[n-2]>=sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
