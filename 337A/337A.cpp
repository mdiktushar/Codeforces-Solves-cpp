#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++)
        cin>>arr[i];
    int mm = INT_MAX;

    sort(arr,arr+m);
    for(int i=0; i<m; i++)
    {
        if(i+(n-1)>=m)
            break;
        int f = abs(arr[i]-arr[i+(n-1)]);
        if(f<mm)
            mm=f;
    }
    cout<<mm<<endl;

    return 0;
}
