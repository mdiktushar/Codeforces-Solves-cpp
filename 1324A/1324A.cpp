#include<bits/stdc++.h>
#include<cstdlib>
#define ll long long
#define l long

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

using namespace std;
//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int f = 0;
        sort(arr,arr+n);
        int a = arr[0];
        if(arr[0] == arr[n-1]){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            arr[i] = arr[i]-a;
        }
        for(int i=0; i<n; i++){
            if(arr[i]%2 != 0)
                f++;
        }
        if(f==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
