#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define ll long long
#define l long

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

void zeroarr(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
}

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

void viewarr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}


//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        while(true){
            if(a<=20)break;
            if(b==0)break;
            a/=2;
            a+=10;
            if(a<=20)break;
            b--;
        }
        c*=10;
        a-=c;
        if(a<=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
