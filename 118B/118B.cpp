#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;cin>>N;
    int temp = N;
    int n = N*2;n++;
    int num1=0,num2=0;
    for(int I=0; I<n; I++){
        for(int i=0; i<temp*2; i++)cout<<' ';
        for(int i=0; i<=num2; i++){
            if(num2==0)cout<<0;
            else
                cout<<i<<' ';
        }

        num2++;
        int temp2 = num2-1;
        for(int i=temp2-1; i>=0; i--){
            cout<<i;
            if(i!=0)cout<<' ';
        }

        //for(int i=0; i<temp*2; i++)cout<<' ';
        cout<<endl;

        temp--;
        if(num2>N)break;
    }
    num2--;
    int sp=2;
    temp = N-1;
    for(int I=0; I<n; I++){
        for(int i=0; i<sp; i++)cout<<' ';
        sp+=2;
        for(int i=0; i<=temp; i++){
            if(temp==0)cout<<0;
            else cout<<i<<' ';
        }
        temp--;
        if(temp<0)break;
        int temp2 = temp;
        for(int i=temp2; i>=0; i--){
            cout<<i;
            if(i!=0)cout<<' ';
        }

        //for(int i=0; i<sp; i++)cout<<' ';
        cout<<endl;

    }

    return 0;
}
