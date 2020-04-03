#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    n*=2;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int k; cin>>k;
    int p=0;
    for(int i=0; i<n; i++){
        if(arr[i]>=k){
            if(i%2==0){
                p = i;
                p/=2;
            }
            else{
                p = ++i;
                p/=2;
                p--;
            }
            break;
        }
    }

    cout<<n/2-p<<endl;
    return 0;
}
