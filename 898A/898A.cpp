#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n; cin>>n;
    if(n%10<=5)cout<<n-(n%10)<<endl;
    else{
        int t = 10-(n%10);
        cout<<n+t<<endl;
    }
    return 0;
}
