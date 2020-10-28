#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;cin>>n;
    int arr[n];
    int a[n];
    for(int i=0; i<n; i++)
    {
        int p; cin>>p;
        arr[i]=p;
        a[i]=p;
    }

    int minn = INT_MAX;
    int t1=0,t2=0;
    for(int i=0; i<n-1; i++)
    {
        if(abs(arr[i]-arr[i+1])<minn)
        {
            t1=i;
            t2=i+1;
            minn = abs(arr[i]-arr[i+1]);
        }
    }

    if(abs(arr[0]-arr[n-1])<minn)
    {
        t1=0; t2=n-1;
    }

    cout<<++t1<<' '<<++t2<<endl;
    return 0;
}
