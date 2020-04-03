#include<bits/stdc++.h>
#define Y cout<<"YES"<<endl
#define N cout<<"NO"<<endl
#define l long long

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        l sum = 0;
        int n = a.size();
        for(l i=0; i<n; i++){
            if(c[i]==a[i] || c[i]==b[i])
                sum+=1;
        }
        if(sum == n)
            Y;
        else
            N;
    }

    return 0;
}
