#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];

        int *pi, *pk;
        bool f = false;
        int i;
        for(i=1; i<n-1; i++)
        {
            pi = min_element(arr,arr+i);
            pk = min_element(arr+(i+1), arr+n);

            if(*pi<arr[i] && arr[i]>*pk)
            {
                i++;
                f=true;
                break;
            }

        }
        if(f==true)
        {
            cout<<"YES"<<endl;
            cout<<(pi-arr)+1<<' '<<i<<' '<<(pk-arr)+1<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
