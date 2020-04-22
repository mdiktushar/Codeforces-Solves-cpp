#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int t=n;
    t--;
    int a,b;cin>>a>>b;
    int m = max(a,b);
    int f=0;
    while(t--){
        //cout<<m<<endl;
        int temp=-1;
        cin>>a>>b;
        if(a>m && b>m)
            f++;
        if(f!=0)continue;
        if(min(a,b)<=m)
            temp=min(a,b);
        if(max(a,b)<=m)
            temp=max(a,b);
        m=temp;
    }//cout<<m<<endl;
    if(f==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
