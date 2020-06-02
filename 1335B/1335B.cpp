#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;cin>>t;
    while(t--)
    {
        int n,a,b;cin>>n>>a>>b;
        string s;
        char c='a';
        int t1=a,t2=b;
        while(n--)
        {
            if(t1>0)
            {
                if(t2>0)
                {
                    s+=c;
                    c++;
                }
                else{
                    if(t2==0)
                        c--;
                    s+=c;
                }
                t2--;
            }
            else
            {
                t1=a;
                t2=b-1;
                c='a';
                s+=c++;
            }
            t1--;
        }
        cout<<s<<endl;
    }

    return 0;
}
