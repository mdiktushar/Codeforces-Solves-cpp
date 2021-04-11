#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k1,k2, w,b;
        cin>>n>>k1>>k2>>w>>b;

        if(k1+k2 < w*2)
            cout<<"NO"<<endl;
        else
        {
            int a = n-k1;
            int d = n-k2;
            if(a+d >= 2*b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
