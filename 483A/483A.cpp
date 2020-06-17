#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli a,b;
    cin>>a>>b;
    if(a%2!=0)a++;
    if(a+2>b)
        cout<<-1<<endl;
    else cout<<a<<' '<<a+1<<' '<<a+2<<endl;

    return 0;
}
