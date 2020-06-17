#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli num;cin>>num;

    if(num<0)
    {
        string s1,s2;
        s1 = to_string(num);
        s2 = s1;
        int n = s1.size();

        char c=s1[n-1];
        s1.erase(n-1,n-1);
        s2.erase(n-2,n-1);
        s2+=c;
        lli n1=stoi(s1);
        lli n2=stoi(s2);
        cout<<max(n1,n2)<<endl;
    }
    else cout<<num<<endl;


    return 0;
}
