#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,m;
    cin>>n>>m;
    lli old, sum = 0;
    cin>>old; sum = old-1;
    m--;
    while(m--)
    {
        lli i;cin>>i;
        if(i-old>=0){
            sum+=(i-old);
            old = i;
        }
        else{
            sum = sum + (n-old) + i;
            old = i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
