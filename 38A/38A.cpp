#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    arr[0]=0;
    for(int i=2; i<n+1; i++){
        cin>>arr[i];
    }
    int a,b;cin>>a>>b;
    int sum=0;
    for(int i=a+1; i<=b; i++){
        sum += arr[i];
    }
    cout<<sum<<endl;

    return 0;
}
