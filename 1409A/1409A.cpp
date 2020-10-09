#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        lli result = 0;
        if(a<b)
        {
            b-=a;
            result = b/10;
            b-=result*10;
            if(b%10)
                result++;
        }
        else if(a>b)
        {
            a-=b;
            result = a/10;
            a-=result*10;
            if(a%10)
                result++;
        }
        cout<<result<<endl;
    }

    return 0;
}
