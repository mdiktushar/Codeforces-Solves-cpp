#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int j=0;
        char c='a';
        string s;
        for(int i=0; i<n; i++){
            j++;
            if(j>k){c='a';j=1;}
            s+=c;
            c++;
        }
        cout<<s<<endl;
    }

    return 0;
}
