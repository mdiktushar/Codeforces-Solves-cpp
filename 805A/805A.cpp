#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,r;
    cin>>l>>r;
    if(l!=r)
        cout<<2<<endl;
    else{
        if(l%2==0)
            cout<<2<<endl;
        else cout<<l<<endl;
    }

    return 0;
}
