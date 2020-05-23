#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    if(n%2!=0 || n<6)
        cout<<0<<endl;
    else
    {
        n/=2;
        if(n%2==0)n-=2;
        else n--;
        cout<<n/2<<endl;
    }

    return 0;
}
