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
        start:
        int n;
        string s, s1;
        cin>>n>>s;
        for (char a = 'A'; a <= 'Z'; a++) {
            auto f = s.find(s, n+1);
            if(f != -1){
                NO;
                goto start;
            }
        }
        s1 = s;
        sort(s1.begin(), s1.end());
        if(s == s1) {
           YES;
        } else {
            NO;
        }
    }

    return 0;
}
