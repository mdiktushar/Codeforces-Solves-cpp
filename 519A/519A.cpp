#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=8;
    char ch[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>ch[i][j];
    int B=0, W=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ch[i][j]=='q')
                B+=9;
            else if(ch[i][j]=='r')
                B+=5;
            else if(ch[i][j]=='b' || ch[i][j]=='n')
                B+=3;
            else if(ch[i][j]=='p')
                B+=1;
            else if(ch[i][j]=='Q')
                W+=9;
            else if(ch[i][j]=='R')
                W+=5;
            else if(ch[i][j]=='B' || ch[i][j]=='N')
                W+=3;
            else if(ch[i][j]=='P')
                W+=1;
        }
    }
    if(B==W)
        cout<<"Draw"<<endl;
    else if(B>W)
        cout<<"Black"<<endl;
    else cout<<"White"<<endl;
    return 0;
}
