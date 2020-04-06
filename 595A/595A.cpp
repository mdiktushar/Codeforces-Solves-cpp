#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int sum = 0;
    int M=m;
    while(n--){
        while(m--){
            int a,b;
            cin>>a>>b;
            if(a>0||b>0)
                sum+=1;
        }m=M;
    }
    cout<<sum<<endl;
    return 0;
}
