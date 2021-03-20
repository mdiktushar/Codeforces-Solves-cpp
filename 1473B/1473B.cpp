#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s1,s2;cin>>s1>>s2;
        int n1 = s1.size(), n2 = s2.size();
        int G = __gcd(n1,n2);

        string r1, r2;
        for(int i=0; i<n2/G; i++)
            r1 += s1;
        for(int i=0; i<n1/G; i++)
            r2 += s2;
        if(r1 == r2)
            cout<<r1<<endl;
        else
            cout<<-1<<endl;
    }
}
