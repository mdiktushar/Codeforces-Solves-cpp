#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int n = s.size();
    int f=0;
    int n1 = n/2;
    if(n%2==0){
        for(int i=0; i<n1; i++){
            //cout<<s[i]<<' '<<s[--n]<<endl;
            if(s[i]!=s[--n])
                f++;
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        for(int i=0; i<n1; i++){
            //cout<<s[i]<<' '<<s[--n]<<endl;
            if(s[i]!=s[--n])
                f++;
        }
        if(f==1||f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
