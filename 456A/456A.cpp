#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;int f=0;
    for(int i=0; i<n ;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b && f==0)
        {
            f++;

        }
    }
    if(f==0)
        cout<<"Poor Alex"<<endl;
    else
        cout<<"Happy Alex"<<endl;
    return 0;
}
