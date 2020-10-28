#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int sum = 0;
    for(int i=0; m!=0; i++){
        if(arr[i]<0){
            sum += arr[i];
            m--;
        }else{
            break;
        }
    }
    cout<<abs(sum)<<endl;

    return 0;
}
