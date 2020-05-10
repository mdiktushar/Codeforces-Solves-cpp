#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int f=0,d=1;
    for(int i=0; i<n; i++){
        if(arr[i]>=d){
            f++; d++;
        }
    }
    cout<<f<<endl;
    return 0;
}
