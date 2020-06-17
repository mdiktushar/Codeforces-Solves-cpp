#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    if(n<3)
        cout<<0<<endl;
    else
    {
        int num=0;
        for(int i=1; i<n-1; i++)
        {
            if(arr[i-1]>arr[i]&&arr[i]<arr[i+1])
                num++;
            else if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
                num++;
        }
        cout<<num<<endl;
    }

    return 0;
}
