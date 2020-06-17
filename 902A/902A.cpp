#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int mx = INT_MIN;
    int arr[n][2];
    for(int i=0; i<n; i++)
    {
        int a,b;cin>>a>>b;
        if(a==0)
            mx=max(mx,b);
        arr[i][0]=a;arr[i][1]=b;
    }
    if(mx>=m)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    int temp=INT_MIN;
    while(true)
    {
        int temp1=mx;
        for(int i=0; i<n; i++)
        {
            int f=0;
            if(arr[i][0]<=mx)
            {
                int temp=max(mx,arr[i][1]);
                //cout<<temp<<endl;
                if(temp>mx)
                {
                    //cout<<temp<<endl;
                    mx=temp;
                    f++;
                }
            }
        }
        if(mx>=m)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(temp1==mx)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    return 0;
}
