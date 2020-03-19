#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i]=0;
    }
    int n; cin>>n;
    for(int i=0; i<n; i++){
        char A;cin>>A;
        if(A=='0'||A=='1'||A=='2'||A=='3'||A=='4'||A=='5'||A=='6'
        ||A=='7'||A=='8'||A=='9'){
            int k = A;
            k = k-48;
            arr[k] = 0;
        }
        else if(A=='L'){

            for(int j=0; j<10; j++){
                if(arr[j]==0){arr[j]=1;break;}
            }
        }
        else if(A=='R'){
            for(int j=9; j>=0; j--){
                if(arr[j]==0){arr[j]=1;break;}
            }
        }

    }
    for(int i=0; i<10; i++){
        cout<<arr[i];
    }

    return 0;
}
