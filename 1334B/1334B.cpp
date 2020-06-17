#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        reverse(arr,arr+n);
        double sum=0; int res=0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            if(sum/(i+1)<x)
                break;
            res++;
        }
        cout<<res<<endl;
    }

    return 0;
}
