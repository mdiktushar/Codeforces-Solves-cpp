#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int zer=0,one=0, mx = -1;

    while(n--)
    {
        int i;cin>>i;
        if(i==0)
        {
            zer++;
            if(zer>mx)
                mx=zer;
        }
        else
        {
            one++;
            if(zer>0)
                zer--;
        }
    }
    cout<<one+mx<<endl;

    return 0;
}
