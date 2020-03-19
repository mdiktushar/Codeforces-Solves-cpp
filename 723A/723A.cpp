#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=arr[n-1]-arr[0];
    cout<<ans<<endl;

    return 0;
}
