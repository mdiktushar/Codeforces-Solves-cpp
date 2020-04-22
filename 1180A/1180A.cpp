#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int t = n-1;
    t*=2; t++;
    int i=t;
    while(i>1){
        i-=2;
        i*=2;
        t+=i;
        i/=2;
    }
    cout<<t<<endl;
    return 0;
}
