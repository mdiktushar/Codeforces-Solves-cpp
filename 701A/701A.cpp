#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        temp[i]=arr[i];
    }
    sort(temp, temp+n);

    int f=1;

    for(int i=0; i<n/2; i++)
    {
        auto a = find(arr,arr+n,temp[i]);
        int t = abs(a - arr);
        arr[t] = -1;
        cout<<t+1<<' ';

        a = find(arr, arr+n,temp[n-f++]);
        t = abs(a - arr);
        arr[t] = -1;
        cout<<t+1<<endl;
    }

    return 0;
}
