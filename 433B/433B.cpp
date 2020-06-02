#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++){
        int t;cin>>t;
        arr1[i]=t; arr2[i]=t;
    }
    sort(arr2,arr2+n);
    long long int arr3[n],arr4[n];
    arr3[0]=arr1[0];
    arr4[0]=arr2[0];

    for(int i=1; i<n; i++)
    {
        arr3[i]=arr1[i]+arr3[i-1];
        arr4[i]=arr2[i]+arr4[i-1];
        //cout<<arr3[i]<<' '<<arr4[i]<<endl;
    }


    int t;cin>>t;
    while(t--){
        int ty,l,r;
        cin>>ty>>l>>r;
        l--; r--;
        if(ty==1)
             cout<<(arr3[r]-arr3[l]+arr1[l])<<endl;
        else
            cout<<(arr4[r]-arr4[l]+arr2[l])<<endl;
    }
    return 0;
}
