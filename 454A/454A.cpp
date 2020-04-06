#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int D=1;
    int s=n/2;
    for(int i=1; i<=n; i++){
        if(i<=(n/2)+1){
            for(int j=0; j<s; j++)
                cout<<'*';

            for(int j=0; j<D; j++)
                cout<<'D';
            D+=2;
            for(int j=0; j<s; j++)
                cout<<'*';
            s--;
            cout<<endl;
            if(i==(n/2)+1){
                D-=2;s++;
            }
        }
        else{
            s++;
            D-=2;
            for(int j=0; j<s; j++)
                cout<<'*';
            for(int j=0; j<D; j++)
                cout<<'D';
            for(int j=0; j<s; j++)
                cout<<'*';
            cout<<endl;
        }
    }

    return 0;
}
