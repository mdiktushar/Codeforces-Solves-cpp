#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;cin>>a>>b>>c;
    int i=1;
    while(i<=b)
    {
        a%=b;
        a*=10;
        //cout<<a<<' '<<a/b<<endl;
        if(a/b==c)
        {
            cout<<i<<endl;
            return 0;
        }
        if(a%b==0&&c==0&&i<=b-1)
        {
            cout<<i+1<<endl;
            return 0;
        }

        i++;
    }
    cout<<-1<<endl;

    return 0;
}
