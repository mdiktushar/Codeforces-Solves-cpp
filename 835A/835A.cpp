#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int f = 2*t1 + s*v1;
    int se = 2*t2 + s*v2;
    if(f>se)cout<<"Second"<<endl;
    else if(f<se)cout<<"First"<<endl;
    else if(f==se)cout<<"Friendship"<<endl;

    return 0;
}
