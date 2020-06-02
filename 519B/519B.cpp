#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int arr1[n-1];int arr2[n-2];

    for(int i=0; i<n-1; i++)
        cin>>arr1[i];

    for(int i=0; i<n-2; i++)
        cin>>arr2[i];

    sort(arr,arr+n);
    sort(arr1,arr1+(n-1));
    sort(arr2,arr2+(n-2));

    int a=0;int b=0;
    int mid = n/2;

    for(int i=0; i<mid; i++)
        if(arr[i]!=arr1[i]){
            a=arr[i];
            break;
        }
    if(a==0)
    {
        for(int i=mid; i<n; i++){
            if(arr[i]!=arr1[i]){
                a=arr[i];
                break;
            }
        }
    }
    mid = (n-1)/2;

    for(int i=0; i<mid; i++){
        if(arr1[i]!=arr2[i]){
            b=arr1[i];
            break;
        }
    }
    if(b==0){
        for(int i=mid; i<n-1; i++){
            if(arr1[i]!=arr2[i]){
                b=arr1[i];
                break;
            }
        }
    }
    cout<<a<<endl<<b<<endl;

    return 0;
}
