#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    n*=2;
    int arr[n*2];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);

    if(arr[0]==arr[n-1])
        cout<<-1<<endl;
    else
        for(int i=0; i<n; i++)
            cout<<arr[i]<<' ';

    return 0;
}
