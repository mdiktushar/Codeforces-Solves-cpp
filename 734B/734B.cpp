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
    int k[3];
    cin>>k[0];
    int k2 = k[0];
    int k3;cin>>k3;
    cin>>k[1]>>k[2];
    sort(k,k+3);
    int sm = k[0];
    int sum = 256*sm;
    sm = abs(sm-k2);
    sm = min(sm,k3);
    sum += sm*32;
    cout<<sum<<endl;

    return 0;
}
