#include<bits/stdc++.h>
#define lli long long
using namespace std;

int main()
{
    int t;cin>>t;
    start:
    while(t--)
    {
        int n;cin>>n;
        lli arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        lli sum = 0;
        for(int i=0; i<n; i++)
        {
            lli temp = (i*(i+1))/2;
            sum += arr[i];
            if(temp > sum)
            {
                cout<<"NO"<<endl;
                goto start;
            }
        }
        cout<<"YES"<<endl;

    }
    return 0;
}
