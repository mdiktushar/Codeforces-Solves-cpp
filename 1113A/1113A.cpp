#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,v;cin>>x>>v;
    int n=--x;
    int res=0;
    for(int i=1; i<=x+1; i++){
        if(n==0){
            cout<<res<<endl;
            return 0;
        }
        if(i==1){
            int m=min(v,n);
            n-=m;
            m*=i;
            res+=m;
        }
        else{
            n--;
            res+=i;
        }
    }

    return 0;
}
