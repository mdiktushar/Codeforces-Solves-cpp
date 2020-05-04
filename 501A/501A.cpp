#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    double mis = max((3*a)/10, a-(a/250)*c);
    double vas = max((3*b)/10, b-(b/250)*d);

    if(mis==vas)cout<<"Tie"<<endl;
    else if(mis>vas)cout<<"Misha"<<endl;
    else cout<<"Vasya"<<endl;

    return 0;
}
