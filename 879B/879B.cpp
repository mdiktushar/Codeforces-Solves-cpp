#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;
    lli arr[n];
    for(lli i=0; i<n; i++)
        cin>>arr[i];

    lli temp = k;
    lli num=arr[0];
    for(lli i=1; i<n; i++)
    {
        if(num<arr[i])
        {
            temp=k-1;
            num=arr[i];
            continue;
        }
        temp--;
        if(temp==0)
            break;
    }
    cout<<num<<endl;
    return 0;
}
