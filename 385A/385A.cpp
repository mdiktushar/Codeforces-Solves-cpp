#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;cin>>n>>c;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int mx=INT_MIN,ind=-1;
    for(int i=0; i<n-1; i++)
    {
        int temp = arr[i]-arr[i+1];
        if(temp>mx)
        {
            mx=temp;
            ind=i;
        }
    }
    int sum=arr[ind];
    sum = sum-c-arr[ind+1];
    if(sum<=0)
        cout<<0<<endl;
    else
        cout<<sum<<endl;

    return 0;
}
