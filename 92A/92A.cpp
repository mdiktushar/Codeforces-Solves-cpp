#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    lli sum  = (n*(n+1))/2;
    if(sum<=m)
    {
        int temp = m/sum;
        m-=(temp*sum);
    }
    for(int i=1; m>=i; i++){
        m-=i;
    }
    cout<<m<<endl;

    return 0;
}
