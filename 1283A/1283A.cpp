#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int h,m;cin>>h>>m;
        h++;
        h = 24 - h;
        m = 60 - m;
        h *= 60;
        m +=h;
        cout<<m<<endl;
    }

    return 0;
}
