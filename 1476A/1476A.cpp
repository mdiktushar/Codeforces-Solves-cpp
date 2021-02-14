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

void task(lli n, lli k){
    lli t = k/n;
    lli t1 = k%n;
    if(t1)
        t++;
    cout<<t<<endl;
}

//md.imrul kayes
int main()
{

    int t;cin>>t;
    start:
    while(t--)
    {
        lli k, n;cin>>n>>k;
        if(n==k)
            cout<<1<<endl;
        else if(n==1)
            cout<<k<<endl;
        else if(n>k){
            lli temp = n/k;
            if(n%k)
                temp++;

            k *= temp;

            task(n,k);
        }
        else
            task(n,k);

    }

    return 0;
}

