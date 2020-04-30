#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        int f; cin>>f;
        int f1=f/m;
        if(f%m!=0)f1++;
        arr[i]=f1;
    }
    int mx = *max_element(arr,arr+n);
    for(int i=n-1; i>=0 ;i--){
        if(arr[i]==mx){
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}
