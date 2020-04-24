#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int f=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;cin>>c;
            if(c=='C' || c=='M' || c=='Y')
                f++;
        }
    }
    if(f==0)cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;

    return 0;
}
