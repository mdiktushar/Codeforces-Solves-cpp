#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    n++;
    int arr[n];bool fa[n];
    int j=1;
    int N = n;
    for(int i=1; i<n; i++)
        cin>>arr[i];
    while(N--)
    {
        memset(fa,false,n);
        int i=arr[j];
        fa[j++]=true;
        for(; i<n; i=arr[i])
        {
            if(fa[i]==true)
            {
                cout<<i<<' ';
                break;
            }
            fa[i]=true;
        }
    }
    cout<<endl;

    return 0;
}
