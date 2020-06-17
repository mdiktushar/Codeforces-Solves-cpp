#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,h2,m1,m2;
    char c;

    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;

    int H = h2-h1;
    int M = m2-m1;
    H*=60;H+=M;
    H/=2;
    int t=H/60;
    M=H-(t*60);
    H=t;
    h1+=H;m1+=M;
    if(m1>=60)
    {
        int t2=m1/60;
        h1+=t2;
        m1=m1-(t2*60);
    }

    string sh,sm;
    sh=to_string(h1);
    sm=to_string(m1);
    if(sh.size()==1)
    {
        char ch=sh[0];
        sh.clear();
        sh+='0';sh+=ch;
    }
    if(sm.size()==1)
    {
        char ch=sm[0];
        sm.clear();
        sm+='0';sm+=ch;
    }
    cout<<sh<<c<<sm<<endl;

    return 0;
}
