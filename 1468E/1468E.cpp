#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int a[4];
        for(int i=0; i<4; i++)
            cin>>a[i];
        sort(a,a+4);
        int A = min(a[2],a[3]);
        int B = min(a[0],a[1]);
        cout<<A*B<<endl;
    }

    return 0;
}
