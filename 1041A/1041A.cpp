#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    long int Arr[n];
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    sort(Arr,Arr+n);
    int k=0;
    for(int i=Arr[0]; i<=Arr[n-1]; i++){
        k++;
    }
    k = k-n;
    cout<<k<<endl;

    return 0;
}
