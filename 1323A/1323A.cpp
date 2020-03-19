#include<bits/stdc++.h>
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
        int f1=0, f2 = 0;
        int arr1[n],arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] %2 == 0){
                arr1[f1++] = i+1;
            }
            else{
                arr2[f2++] = i+1;
            }
        }
        if(f1>=1){
            cout<<1<<endl;
            for(int i=0; i<1; i++){
                cout<<arr1[i]<<" ";
            }
        }else if(f2>=2){
            cout<<2<<endl;
            for(int i=0; i<2; i++){
                cout<<arr2[i]<<" ";
            }
        }else{
        cout<<-1;
        }
        cout<<endl;
    }

    return 0;
}

