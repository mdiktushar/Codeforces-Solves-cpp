#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int m = arr[n-1];

    int sum1=0;
    while(sum1<=sum){
        sum1=0;
        for(int i=0; i<n; i++){
            sum1+=m-arr[i];
        }
        m++;
    }
    cout<<--m<<endl;
    return 0;
}
