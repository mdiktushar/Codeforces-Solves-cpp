#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli sum=0;
    string s;cin>>s;
    int n = s.size();
    while(n>2){
        string s9;
        for(int i=1; i<n; i++)
            s9+='9';
        lli temp1 = stoi(s);
        lli temp2 = stoi(s9);
        temp1-=temp2;
        sum+=temp1*n;
        s = to_string(temp2);
        n--;
    }
    lli temp1 = stoi(s);
    if(s.size()>1){
        temp1-=9;
        temp1*=2;
        sum+=temp1;
        sum+=9;
        cout<<sum<<endl;
    }
    else
        cout<<s<<endl;

    return 0;
}
