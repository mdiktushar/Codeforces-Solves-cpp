#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    st:
    while(t--)
    {
        int n;cin>>n;
        int arr1[n],arr2[n];
        int x;cin>>x;
        for(int i=0; i<n; i++)
            cin>>arr1[i];
        for(int i=0; i<n; i++)
            cin>>arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        reverse(arr2,arr2+n);
        for(int i=0; i<n; i++)
        {
            if(arr1[i]+arr2[i]>x)
            {
                cout<<"No"<<endl;
                goto st;
            }
        }
        cout<<"Yes"<<endl;

    }

    return 0;
}
