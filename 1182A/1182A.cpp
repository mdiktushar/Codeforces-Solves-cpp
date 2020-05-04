#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;cin>>n;
    long long int t = 2;
    if(n%2!=0)
        cout<<0<<endl;
    else cout<<(long long int)pow(t,n/2)<<endl;

    return 0;
}
