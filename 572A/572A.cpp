#include<bits/stdc++.h>
using namespace std;

void input(int *arr, int n){
    for(int i=0; i<n; i++)
        cin>>arr[i];
}

int main()
{
    int na, nb;
    cin>>na>>nb;
    int k,m;cin>>k>>m;
    int A[na], B[nb];
    input(A,na);
    input(B,nb);
    if(A[k-1]<B[nb-m])
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
