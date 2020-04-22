#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int sum=0;
    while(n--){
        a-=2;
        sum+=(a+a+b+b);
        a+=2;
        a-=4;
        b-=4;
    }
    cout<<sum<<endl;
    return 0;
}
