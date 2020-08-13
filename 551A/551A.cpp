#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    int pos[n];
    int ans[n];
    memchr(ans, -1, n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        pos[i]=arr[i];
    }
    sort(pos,pos+n);
    reverse(pos,pos+n);
    for(int i=0; i<n; i++)
    {
        auto f1 = find(pos,pos+n,arr[i]);
        int a = distance(pos,f1);
        ans[i] = a+1;
    }
    for(int i=0; i<n; i++)
        cout<<ans[i]<<' ';
}
