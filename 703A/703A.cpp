#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int M=0,C=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b)
            M++;
        else if(a<b)
            C++;
    }
    if(M>C)
        cout<<"Mishka"<<endl;
    else if(M==C)
        cout<<"Friendship is magic!^^"<<endl;
    else if(M<C)
        cout<<"Chris"<<endl;

    return 0;
}
