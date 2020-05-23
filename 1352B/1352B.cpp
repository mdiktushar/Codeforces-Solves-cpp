#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli n,k;
        cin>>n>>k;
        lli f = n-(k-1);
        if(f>0 && f%2==1)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<(k-1); i++)
                cout<<1<<' ';
            cout<<f<<endl;
            continue;
        }
        f = n-2*(k-1);
        if(f>0 && f%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<(k-1); i++)
                cout<<2<<' ';
                cout<<f<<endl;
            continue;
        }
        cout<<"NO"<<endl;

    }

    return 0;
}
