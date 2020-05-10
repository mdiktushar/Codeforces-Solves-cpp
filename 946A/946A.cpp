#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    lli a=0,b=0;
    while(n--){
        lli i;
        cin>>i;
        if(i>=0)a+=i;
        else b+=i;
    }

    cout<<a-b<<endl;

    return 0;
}
