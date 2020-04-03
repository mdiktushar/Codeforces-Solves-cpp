#include<bits/stdc++.h>
using namespace std;

int main()
{
    string t;cin>>t;
    string c[5];
    for(int i=0; i<5; i++)
        cin>>c[i];
    int f=0;
    for(int i=0; i<5; i++){
        if(c[i][0]==t[0]){
            f++;break;
        }
        if(c[i][1]==t[1]){
            f++;break;
        }
    }
    if(f>0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
