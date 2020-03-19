#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int arr[n];int f=0;
        for(int i=0; i<n; i++){cin>>arr[i];}
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int m = arr[i]-arr[j];
                m = abs(m);
                if(m==1){f++;break;}
            }if(f>0)break;
        }
        if(f!=0)cout<<2<<endl;
        else cout<<1<<endl;

    }

    return 0;
}
