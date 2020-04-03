#include<bits/stdc++.h>
using namespace std;

#define Y "YES"
#define N "NO"
int main()
{
    int t;cin>>t;
    while(t--){
        int m,n;cin>>m>>n;
        (m%n==0) ? cout<<Y<<endl : cout<<N<<endl;
    }
}
