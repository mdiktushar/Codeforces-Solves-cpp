#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<cstring>
#define lli long long int
#define ulli unsigned long long int
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

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

//cin.ignore();
//getline(cin,s);

//md.imrul kayes


int main()
{
    int __;
    cin>>__;
    while(__--) {
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        if (arr[0] == arr[n-1]) {
            NO; continue;
        }
        YES;
        for(int i = 0; i < n; i++) {
            if(i==1)
                cout<<'R';
            else
                cout<<'B';
        }cout<<endl;
    }

    return 0;
}
