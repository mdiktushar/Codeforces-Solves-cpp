#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n,m;cin>>n>>m;
    if(m%n==0){
        long long i=0;
        long long F=m/n;
        while(F%2==0){i++;F/=2;}
        while(F%3==0){i++;F/=3;}
        if(F!=1)cout<<-1<<endl;
        else cout<<i<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
