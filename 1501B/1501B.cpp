#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        reverse(arr,arr+n);
        int F = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i]>1 && F<arr[i])
            {
                F = arr[i];
            }
            if(F){
                arr[i] = 1;
                F--;
            }
            else if(arr[i])
                arr[i] = 1;
            else
                arr[i] = 0;
        }

        reverse(arr,arr+n);

        for(auto i:arr)
            cout<<i<<' ';
        cout<<endl;
    }


    return 0;
}
