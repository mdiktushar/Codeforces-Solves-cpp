#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(z==0){
        if(x==y)cout<<0<<endl;
        else if(x>y)cout<<'+'<<endl;
        else cout<<'-'<<endl;
    }
    else{
        if(x>z+y)cout<<'+'<<endl;
        else if(y>z+x)cout<<'-'<<endl;
        else cout<<'?'<<endl;
    }
    return 0;
}
