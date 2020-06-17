#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int f=0;
    while(n--)
    {
        int i;cin>>i;
        if(i==1)f++;
    }
    if(f==0)
        cout<<1<<endl;
    else cout<<-1<<endl;

    return 0;
}
