#include<bits/stdc++.h>
#include<cstdlib>
#define ll long long
#define l long

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

using namespace std;
//md.imrul kayes
int main()
{

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<1<<' '<<n-1<<endl;
    }
    return 0;
}
