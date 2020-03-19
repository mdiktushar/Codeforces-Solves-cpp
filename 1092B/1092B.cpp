#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,S=0;; cin>>n;
    int stu[100];
    for(int i=0; i<n; i++){
        cin>>stu[i];
    }
    sort(stu,stu+n);

    for(int i=0; i<n; i+=2){
        int P = stu[i+1] - stu[i];
        S = S+P;

    }
    cout<<S<<endl;

    return 0;
}
