#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    valarray<int>v = {a,b,c,d,e};
    int s = v.sum();
    if(s%5==0 && s!=0)
        cout<<s/5<<endl;
    else
        cout<<-1<<endl;

    return 0;
}
