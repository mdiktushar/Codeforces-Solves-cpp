#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int res = 0;
        for(int i=1; i<n; i++)
        {
            int temp = k-arr[i];
            res += (temp/arr[0]);
        }
        cout<<res<<endl;
    }

    return 0;
}
