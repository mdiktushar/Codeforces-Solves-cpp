#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

#define lli long long int

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

lli findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

void viewarr(lli arr[], lli n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
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
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int a=0,b=n-1;
        for(int i=0; i<n/2; i++)
        {
            cout<<arr[a++]<<' ';
            cout<<arr[b--]<<' ';
        }
        if(n%2!=0)
            cout<<arr[a];
        cout<<endl;
    }

    return 0;
}

