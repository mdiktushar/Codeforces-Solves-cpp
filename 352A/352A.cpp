#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int z=0,f=0;
    while(n--){
        int i;cin>>i;
        if(i==0)
            z++;
        else f++;
    }
    if(z==0)
        cout<<-1<<endl;
    else if(f<9)
        cout<<0<<endl;
    else{
        while(f!=0){
            if((f*5)%9==0)
                break;
            f--;
        }
        for(int i=0; i<f; i++)
            cout<<5;
        for(int i=0; i<z; i++)
            cout<<0;
        cout<<endl;
    }
    return 0;
}
