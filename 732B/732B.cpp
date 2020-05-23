#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int sum=0;
    for(int i=1; i<n; i++)
    {
        int s = arr[i-1]+arr[i];
        if(s<k)
        {
            s = k-s;
            sum+=s;
            arr[i]+=s;
        }
    }
    cout<<sum<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';

    return 0;
}
