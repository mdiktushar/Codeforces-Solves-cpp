#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        lli L,R,d;
        cin>>L>>R>>d;
        lli r = max(L,R);
        lli l = min(L,R);

        if(d<l)
            cout<<d<<endl;
        else{
            lli temp = r%d;
            cout<<r+(d-temp)<<endl;
        }
    }
    return 0;
}
