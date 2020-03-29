#include<bits/stdc++.h>
using namespace std;

//Md. Imrul Kayes

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int S=0, F=0;
    for(int i=0; i<n-1; i++){
        if(s[i]=='S' && s[i+1]=='F')
            F++;
        else if(s[i]=='F' && s[i+1]=='S')
            S++;
    }
    if(F>S)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
