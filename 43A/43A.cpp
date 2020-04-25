#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s1,s2;
    int a=0,b=0;
    cin>>s1;
    n--;a++;
    while(n--){
        string s;cin>>s;
        if(s==s1)a++;
        else{
            s2=s;
            b++;
        }
    }
    if(a>b)cout<<s1<<endl;
    else cout<<s2<<endl;
    return 0;
}
