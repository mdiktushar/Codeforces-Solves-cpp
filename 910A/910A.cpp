#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;cin>>n>>p;
    string s;cin>>s;

    if(p+1>=n)
    {
        cout<<1<<endl;
        return 0;
    }

    int i=p, nn=0, c=0;

    for(;i>nn; i--)
    {
        if(s[i]=='1')
        {
            //cout<<i<<' '<<i+p<<endl;
            c++;
            if(i+p+1<n)
            {
                nn=i;
                i+=p+1;
            }
            else
            {
                cout<<c+1<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
