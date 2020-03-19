#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    for(long long I=0; I<n; I++){
        long long num;cin>>num;
        long long f=0;
        while(1){
            if(num==1)break;
            else if(num%5==0){
                long long k = num*4;
                num = k/5;
                f++;
            }
            else if(num%3 == 0){
                long long k = num*2;
                num = k/3;
                f++;
            }
            else if(num%2==0){
                num = num/2;
                f++;
            }
            else{
                f=-1;
                break;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}
