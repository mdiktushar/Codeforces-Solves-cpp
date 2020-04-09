#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum, temp1, temp2;

int  main()
{
    ll n;
    cin>>n>>sum;
    while(n--){
        char c;cin>>c;
        ll i;cin>>i;

        if(c=='+')
            sum+=i;
        else{
            if(i<=sum)
                sum-=i;
            else
                temp1++;
        }
    }
    cout<<sum<<' '<<temp1<<endl;
}
