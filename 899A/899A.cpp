#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int on=0,tw=0;
    while(n--)
    {
        int i;cin>>i;
        if(i==1)on++;
        else tw++;
    }
    if(on<=tw)
        cout<<on<<endl;
    else
    {
        on-=tw;
        cout<<tw+on/3<<endl;
    }
}
