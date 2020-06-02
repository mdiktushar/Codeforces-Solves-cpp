#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];

        int x = arr[n-1];
        int res = 0;
        for(int i=n-2; i>-1; i--)
        {
            if(arr[i]>x)
                res++;
            x = min(x,arr[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}
