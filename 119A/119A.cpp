#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int r=0;
    for(int i=1; ; i++){
        if(i%2!=0){
            int p = __gcd(a,n);
            if(p<=n)n-=p;
            else{
                cout<<1<<endl;
                return 0;
            }
        }
        else{
            int p = __gcd(b,n);
            if(p<=n)n-=p;
            else{
                cout<<0<<endl;
                return 0;
            }
        }
    }

    return 0;
}
