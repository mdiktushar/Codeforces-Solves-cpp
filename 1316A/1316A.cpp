#include<bits/stdc++.h>
#define ll long long
#define l long

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

using namespace std;
//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int num[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>num[i];
            sum += num[i];
        }
        if(sum <= m){
            cout<<sum<<endl;
        }else cout<<m<<endl;

    }
    return 0;
}

