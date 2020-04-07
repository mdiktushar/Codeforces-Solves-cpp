#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int f=0;
    for(int i=1; i<=r; i++){
        if(i%2!=0){
            for(int j=0; j<c; j++)
                cout<<"#";
        }
        else{
            f++;
            if(f==1){
                for(int j=0; j<c-1; j++)
                    cout<<'.';
                cout<<"#";
            }
            else{
                f=0;
                cout<<"#";
                for(int j=0; j<c-1; j++)
                    cout<<'.';
            }
        }cout<<endl;
    }

    return 0;
}
