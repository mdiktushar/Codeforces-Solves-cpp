#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    if(n%2==0)
        cout<<n/2<<endl;
    else
        cout<<(n/2)-n<<endl;

    return 0;
}
