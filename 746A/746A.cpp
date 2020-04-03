#include<bits/stdc++.h>
using namespace std;

int main()
{

    int l,a,p;
    cin>>l>>a>>p;
    a/=2;
    p/=4;
    int n = min(l,min(a,p));
    cout<<1*n+2*n+4*n<<endl;
    return 0;
}
