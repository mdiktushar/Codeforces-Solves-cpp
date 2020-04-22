#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    cout<<c*2+min(a,b)+min(max(a,b),min(a,b)+1)<<endl;

    return 0;
}
