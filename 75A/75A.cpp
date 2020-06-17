#include<bits/stdc++.h>
#define lli long long int
using namespace std;

string rzero(string s1)
{
    string s2;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='0')
            continue;
        s2+=s1[i];
    }
    return s2;
}

int main()
{
    lli a,b,c;
    cin>>a>>b;
    c = a+b;
    string A,B,C;
    A = to_string(a);
    B = to_string(b);
    C = to_string(c);
    string A1,B1,C1;
    A1 = rzero(A);
    B1 = rzero(B);
    C1 = rzero(C);

    int t1 = stoi(A1);
    int t2 = stoi(B1);
    int t3 = stoi(C1);
    if(t1+t2==t3)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
