#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bag[4];
    for(int i=0; i<4; i++){
        cin>>bag[i];
    }
    sort(bag,bag+4);
    if(bag[3]==(bag[0]+bag[1]+bag[2])){
        cout<<"YES"<<endl;
    }
    else if((bag[0]+bag[3])==(bag[1]+bag[2])){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
