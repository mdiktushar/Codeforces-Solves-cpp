#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n*2];
    int F=0,T=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n; i<n*2; i++){
        arr[i]=arr[F];
        F++;
    }
    F=0;
    for(int i=0; i<n*2; i++){
        if(arr[i]==0 && i>=n)break;
        if(arr[i]==1)F++;
        else F=0;
        if(F>T) T=F;
        //if(T==n)break;
    }
    cout<<T<<endl;

    return 0;
}
