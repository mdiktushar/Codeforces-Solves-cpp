#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    cin>>l>>r;
    int arr[10];
    for(int i=0; i<10; i++){arr[i]=0;}
    for(int I=l; I<=r; I++){
        int m=0;int c=0;
        while(1){
            int M = I;
            m = M%10;
            if(m==0)arr[0]++;
            else if(m==1)arr[1]++;
            else if(m==2)arr[2]++;
            else if(m==3)arr[3]++;
            else if(m==4)arr[4]++;
            else if(m==5)arr[5]++;
            else if(m==6)arr[6]++;
            else if(m==7)arr[7]++;
            else if(m==8)arr[8]++;
            else if(m==9)arr[9]++;
            M /= 10;
            if(arr[0]>1||arr[1]>1||arr[2]>1||arr[3]>1||
               arr[4]>1||arr[5]>1||arr[6]>1||arr[7]>1||
               arr[8]>1||arr[9]>1){c++;break;}
            if(M==0)break;
        }
        if(c==0){cout<<I<<endl;return 0;}
    }
    cout<<-1<<endl;
    return 0;
}
