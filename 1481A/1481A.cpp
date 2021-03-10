#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y;cin>>x>>y;
        string s;cin>>s;
        int R=0,L=0,U=0,D=0;
        R = count(s.begin(),s.end(),'R');
        L = count(s.begin(),s.end(),'L');
        U = count(s.begin(),s.end(),'U');
        D = count(s.begin(),s.end(),'D');

        if(x>0 && R>=x)x=0;
        if(x<0 && L>=abs(x))x=0;
        if(y>0 && U>=y)y=0;
        if(y<0 && D>=abs(y))y=0;
        cout<<((!x && !y) ? "YES":"NO")<<endl;
    }

    return 0;
}
