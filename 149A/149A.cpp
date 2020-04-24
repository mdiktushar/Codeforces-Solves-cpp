#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[12];
    for(int i=0; i<12; i++)
        cin>>arr[i];
    sort(arr,arr+12);
    int sum = 0,t=0;
    reverse(arr,arr+12);
    for(int i=0; i<12; i++){
        if(sum>=n)break;
        t++;
        sum+=arr[i];
    }
    if(sum>=n)
        cout<<t<<endl;
    else cout<<-1<<endl;
    return 0;
}
