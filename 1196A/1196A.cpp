#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n>0){
        long long a,b,c;
        cin>>a>>b>>c;
        a = (a+b+c)/2;
        cout<<a<<endl;
        n--;
    }

    return 0;
}
