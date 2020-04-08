#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int sum=0, res=0;
    while(t--){
        int i;cin>>i;
        if(i<0){
            if(sum==0)
            {
                res++;
            }
            else
            {
                sum--;
            }
        }
        else{
            sum+=i;
        }
    }
    cout<<res<<endl;
    return 0;
}
