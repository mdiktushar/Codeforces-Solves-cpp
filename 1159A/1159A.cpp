#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    char arr[n];
    int I=0,J=0,T=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]=='+')I++;
        else if(arr[i] == '-')J++;
        if(arr[i]=='-' && T==0)T=0;
        else if(arr[i]=='-' && T!=0)T--;
        else T++;
    }
    if(I==0 && J!=0)cout<<0;
    else if(I!=0 && J==0)cout<<I;
    else cout<<T;

    return 0;
}
