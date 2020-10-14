#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n],b[n],c[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)
            cin>>c[i];
        int p = a[0];
        for(int i=1; i<n; i++)
        {
            cout<<p<<' ';
            if(i!=n-1)
            {
                if(a[i]!=p)
                    p=a[i];
                else
                    p=b[i];
            }
            else
            {
                bool f = false;
                int s = p;
                if(a[i]!=p)
                {
                    p=a[i];
                }

                else
                {
                    p=b[i];
                    f=true;
                }

                if(p==a[0] && f==false && b[i]!=s)
                    cout<<b[i]<<endl;
                else if(p==a[0] && f==false && b[i]==s)
                    cout<<c[i]<<endl;
                else if(p==a[0] && f==true)
                    cout<<c[i]<<endl;
                else
                    cout<<p<<endl;

            }
        }
    }


    return 0;
}
