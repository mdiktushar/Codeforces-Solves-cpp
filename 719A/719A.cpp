#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    if(arr[n-1]==0)
        cout<<"UP"<<endl;
    else if(n==1 && arr[n-1]!=15)
        cout<<-1<<endl;
    else if(arr[n-1]==15 || arr[n-2]>arr[n-1])
        cout<<"DOWN"<<endl;
    else cout<<"UP"<<endl;

    return 0;
}
