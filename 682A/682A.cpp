#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,m;
    cin>>n>>m;
    if(n>m)swap(n,m);
    lli c = 0;

    for(int i=1; i<=n; i++)
        c+=(m+i)/5 - i/5;
    cout<<c<<endl;

    return 0;
}
