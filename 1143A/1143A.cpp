#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int a=0,b=0;
    for(int i=n-1; i>=0; i--)
        if(arr[i]==0){
            a=++i;
            break;
        }
    for(int i=n-1; i>=0; i--)
        if(arr[i]==1){
            b=++i;
            break;
        }
    cout<<min(a,b)<<endl;
    return 0;
}
