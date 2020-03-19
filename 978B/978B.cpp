#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,X=0,T=0;
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
        if(s[i] == 'x')
            T++;
        else
            T=0;
        if(T>2){
            X++;
        }
    }
    cout<<X<<endl;

    return 0;
}
