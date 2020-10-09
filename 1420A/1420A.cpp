#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli n;cin>>n;
        lli arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        bool f = false;
        for(int i=1; i<n; i++)
            if(arr[i]>=arr[i-1]){
                f=true;
                break;
            }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
