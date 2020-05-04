#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int mi = max(n,m);
    n = min(n,m);m=1;
    int f=0;
    for(int i=1; ; i++){
        m = i*n;
        if(m>z)break;
        if(m%mi==0)
            f++;
    }
    cout<<f<<endl;
    return 0;
}
