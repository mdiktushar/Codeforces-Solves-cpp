#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=1; i<n; i++)
        cin>>arr[i];

    int a = 1;
    int i=0;
    while(a<t)
    {
        a+=arr[a];
    }
    if(a==t)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
