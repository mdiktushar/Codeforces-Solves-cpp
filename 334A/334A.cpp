#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    //lli n=100;
    lli p=(int)pow(n,2),f=0,f1=1;
    for(lli i=0; i<n; i++)
    {
        for(lli j=1; j<=(n/2); j++)
        {
            cout<<f1++<<' '<<p-f++<<' ';
        }
        cout<<endl;
    }

    return 0;
}
