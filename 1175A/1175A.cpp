#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        lli n,k;
        cin>>n>>k;
        lli sum=0;
        while(n!=0){
            if(n%k==0){
                sum++;
                n/=k;
            }
            else{
                lli temp = n%k;
                n-=temp;
                sum+=temp;
            }
            ///cout<<n<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}
