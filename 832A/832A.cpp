#include<bits/stdc++.h>
#define ll long long
#define Y "YES"
#define N "NO"

using namespace std;

int main()
{
    ll a, b;cin>>a>>b;
    a /= b;
    a%2==0 ? cout<<N<<endl : cout<<Y<<endl;
    return 0;
}
