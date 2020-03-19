#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100];
    cin>>ch;
    int n = strlen(ch);
    int t = 0;
    for(int i=0; i<n; i++){
        if(ch[i]=='H'||ch[i]=='Q'||ch[i]=='9')t++;
    }
    if(t==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
