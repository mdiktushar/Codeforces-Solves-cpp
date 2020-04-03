#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k *= l;
    c *= d;

    k /= nl;
    p /= np;
    int M = min(c,min(k,p));
    cout<<M/n<<endl;

    return 0;
}
