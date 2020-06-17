#include<bits/stdc++.h>
using namespace std;

int main()
{
    double H,L;
    cin>>H>>L;
    double ans = ((L*L)-(H*H))/(2*H);
    cout<<fixed<<setprecision(13)<<ans<<endl;

    return 0;
}
