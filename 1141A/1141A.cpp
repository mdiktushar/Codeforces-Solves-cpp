#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int k=1,p=0;
    if(m%n != 0){
        cout<<-1<<endl;
    }
    else{
        int d = m/n;
        while(1){
            if(d == 1) break;
            else if(d%2 == 0){
                d/=2;p++;
            }
            else if(d%3 == 0){
                d/=3;p++;
            }
            else{
                cout<<-1<<endl;k=0;
                break;
            }
        }
        if(k){cout<<p<<endl;}
    }

    return 0;
}
