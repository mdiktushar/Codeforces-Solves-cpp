#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int Pa=0;
        int Ca=0;
        int n;cin>>n;
        bool f=false;
        while(n--){
            int a,b;cin>>a>>b;
            if(f==true)continue;
            if(a<Pa||b<Ca||b-Ca>a-Pa)
                f=true;
            Pa=a;Ca=b;
        }
        cout<<(f ? "NO":"YES")<<endl;
    }
    return 0;
}
