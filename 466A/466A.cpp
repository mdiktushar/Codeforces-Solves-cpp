#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,m,a,b;
    cin>>n>>m>>a>>b;

    if(n>=m)
    {
        if(m*a<b)
            cout<<n*a<<endl;
        else
        {
            lli temp = n/m;
            temp*=b;
            if(n%m!=0)
            {
                if((n%m)*a<=b)
                    temp+=(n%m)*a;
                else
                    temp+=b;
            }
            cout<<temp<<endl;
        }
    }
    else
    {
        if(n*a <= b)
            cout<<n*a<<endl;
        else cout<<b<<endl;
    }


    return 0;
}
