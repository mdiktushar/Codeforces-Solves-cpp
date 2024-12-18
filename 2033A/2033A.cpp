#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

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
    lli _;
    cin>>_;
    while(_--)
    {
        int n;cin>>n;
        int i = 1;
        int N = 0;
        for (i = 1; ; i++)
        {
            if (N > n)
                break;
            if (N < (n * -1))
                break;
            int t = (2*i) - 1;
            if (i % 2)
                N -= t;
            else
                N += t;
        }

        if (N < 0)
            cout<<"Sakurako"<<endl;
        else {
            cout<<"Kosuke"<<endl;
        }


    }

    return 0;
}

