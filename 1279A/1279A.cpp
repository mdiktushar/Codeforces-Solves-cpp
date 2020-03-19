#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n = 3;
        long arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        sort(arr,arr+n);
        int F = arr[0]+arr[1];
        if(F>=arr[2]-1){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }

    return 0;
}
