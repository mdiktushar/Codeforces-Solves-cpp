#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int res=0;
    for(int i=1; i<=n; i++)
    {
        int c=0;
        int f=arr[i];
        while(f!=-1)
        {
            f=arr[f];
            c++;
        }
        res=max(res,c);
    }
    cout<<++res<<endl;
    return 0;
}
