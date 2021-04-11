#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int X = (n+3)/4;
        string s;
        int N = n-X;
        for(int i=0; i<N; i++)
            s+='9';
        for(int i=0; i<X; i++)
            s+='8';
        cout<<s<<endl;
    }

    return 0;
}
