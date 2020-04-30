#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,b,d;
    cin>>n>>b>>d;
    lli sum=0,res=0;
    while(n--){
        lli i; cin>>i;
        if(i>b)continue;
        sum+=i;
        if(sum>d){
            res++;
            sum=0;
        }
    }
    cout<<res<<endl;
    return 0;
}
