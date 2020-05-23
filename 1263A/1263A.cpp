#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli s,m,b;
        cin>>s>>m>>b;
        lli arr[3];
        arr[0] = s; arr[1] = m; arr[2] = b;
        sort(arr,arr+3);
        s = arr[0]; m = arr[1]; b = arr[2];
        if(b>=s+m)
            cout<<s+m<<endl;
        else
            cout<<(s+m+b)/2<<endl;

    }

    return 0;
}
