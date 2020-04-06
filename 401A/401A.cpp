#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int sum=0;
    while(n--){
        int i;cin>>i;
        sum+=i;
    }
    sum = abs(sum);
    if(sum%x==0)
        cout<<sum/x<<endl;
    else cout<<sum/x+1<<endl;

    return 0;
}
