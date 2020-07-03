#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    lli arr[n];
    for(lli i=0; i<n; i++)
        cin>>arr[i];

    lli temp=arr[n-1];
    lli sum=temp;

    for(int i=n-2; i>=0; i--)
    {
        //cout<<sum<<endl;
        if(arr[i]>=temp)
        {
            sum+=--temp;
        }
        else if(arr[i]<temp)
        {
            temp=arr[i];
            sum+=temp;
        }
        if(temp==0)
            break;
    }
    cout<<sum<<endl;

    return 0;
}
