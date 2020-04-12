#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int a=0,b=0;
    bool f=false;
    while(n--){
        int i;cin>>i;
        if(f==true)continue;
        if(i==25)a++;
        if(i==50){
            if(a>0){
                a--;
                b++;
            }
            else f=true;
        }
        if(i==100){
            if(a>0 && b>0){
                a--;b--;
            }
            else if(a>2)
                a-=3;
            else f=true;
        }
    }
    if(f==true)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
