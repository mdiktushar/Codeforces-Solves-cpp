#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int res = 2;
    for(int i=0; i<n-1; i++){
        int temp =max(arr[i],arr[i+1])-min(arr[i],arr[i+1]);
        //cout<<arr[i]<<' '<<arr[i+1]<<" = ";
        temp;
        //cout<<temp<<endl;
        if(temp==2*x)
            res++;
        else if(temp>2*x)
            res+=2;

    }

    cout<<res<<endl;

    return 0;
}
