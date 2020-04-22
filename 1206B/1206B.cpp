#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n;cin>>n;
    long long  arr[n];long long f=0,z=0;
    for(long long i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<0)f++;
        if(arr[i]==0)z++;
    }
    long long r=0;
    for(long long i=0; i<n; i++){
        if(arr[i]==0)r++;
        else if(arr[i]>1){
            arr[i]--;
            r+=arr[i];
        }
        else if(arr[i]<-1){
            arr[i]++;
            r+=abs(arr[i]);
        }
    }

    if(f%2!=0 && z==0)
        r+=2;
    cout<<r<<endl;

    return 0;
}
