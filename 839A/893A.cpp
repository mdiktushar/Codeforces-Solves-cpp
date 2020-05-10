#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    lli sum=0;
    lli ext=0;
    int d=0;
    while(n--){
        d++;
        int i;cin>>i;
        if(i<=8){
            sum+=i;
            if(ext!=0 && i<8){
                int temp = 8-i;
                if(ext>=temp){
                    sum+=temp;
                    ext-=temp;
                }
                else{
                    sum+=ext;
                    ext=0;
                }
            }
        }
        else{
            sum+=8;
            ext+=i-8;
        }
        //cout<<sum<<' '<<ext<<endl;
        if(sum>=k){
            cout<<d<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
