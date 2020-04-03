#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    k = min(m,k);
    if(k>=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
