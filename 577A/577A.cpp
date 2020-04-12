#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int r=0;
    if(x==1){
        cout<<1<<endl;
        return 0;
    }
    if(x<=n)r++;
    for(int i=2; i<=n; i++){
        if(x%i==0 && x/i<=n)
            r++;
    }
    cout<<r<<endl;

    return 0;
}
