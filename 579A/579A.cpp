#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{

    lli n;cin>>n;
    int res = 0;
    for(lli i=n; i>=1; i/=2)
    {
        if(i%2!=0)
        {
            res++;
            i--;
        }
        //cout<<i<<endl;
    }

    cout<<res<<endl;
    return 0;
}
