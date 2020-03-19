#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    for(int I=0; I<t; I++){
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int p = x;
        if(a>b){swap(a,b);}

        while(1){
            if(a-1 > 0 && x != 0){a--; x--;}
            if(b+1 <=n && x != 0){b++; x--;}
            if(x==p){x=0;}
            else {p=x;}
            if(x==0){break;}
        }
        int r = abs(b-a);
        cout<<r<<endl;
    }

    return 0;
}
