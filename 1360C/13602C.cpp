#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v1,v2;
        while(n--)
        {
            int i;cin>>i;
            if(i%2==0)
                v1.push_back(i);
            else
                v2.push_back(i);
        }
        if(v1.size()%2==0 && v2.size()%2==0)
            cout<<"YES"<<endl;
        else
        {
            int f=0;
            for(auto i:v1)
            {
                for(auto j:v2)
                {
                    if(i+1==j)
                    {
                        f++;break;
                    }
                    if(i-1==j)
                    {
                        f++;break;
                    }
                }
                if(f!=0)
                    break;
            }
            if(f==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }

    return 0;
}
