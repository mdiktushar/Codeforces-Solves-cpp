#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    char arr[n];
    int ar[n/2],k=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]=='z')ar[k++]=0;
        else if(arr[i]=='n')ar[k++]=1;
    }
    sort(ar,ar+k);
    for(int i=k-1; i>=0; i--)
        cout<<ar[i]<<" ";
    return 0;
}
