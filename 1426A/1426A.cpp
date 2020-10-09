#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        if(n<=2)
            cout<<1<<endl;
        else
        {
            n-=2;
            int t1 = n/x;
            int t2 = n%x;
            t1++;
            if(t2>0)t1++;
            cout<<t1<<endl;
        }
    }

    return 0;
}
