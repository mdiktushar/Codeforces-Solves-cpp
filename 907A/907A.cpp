#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v1,v2,v3,vm;
    cin>>v1>>v2>>v3>>vm;

    int c1 = v1*2;
    int c2 = v2*2;
    int c3 = v3;
    if(vm*2>=c1 || vm*2>=c2){
        cout<<-1<<endl;
        return 0;
    }
    while(true){
        if(vm<=c3&&vm*2>=c3)
            break;
        else c3++;
        //cout<<c3<<endl;
        if(c3>v3*2){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<c1<<' '<<c2<<' '<<c3<<endl;
    return 0;
}
