#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a, b;cin>>a>>b;
    int f=0,d=0,s=0;
    for(int i=1; i<7; i++){
        int F = abs(i-a);
        int S = abs(i-b);
        if(F==S)d++;
        else if(F<S)f++;
        else s++;
    }
    cout<<f<<' '<<d<<' '<<s<<endl;

    return 0;
}
