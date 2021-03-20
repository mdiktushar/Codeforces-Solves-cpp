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

    while(t--)
    {
        int n,k;cin>>n>>k;
        int n1 = n/2;
        int n2 = n-2;

        if(n%2 == 1)
            cout<<1<<' '<<n/2<<' '<<n/2<<endl;
        else if(n%4 == 0)
            cout<<n1<<' '<<n1/2<<' '<<n1/2<<endl;
        else
           cout<<2<<' '<<n2/2<<' '<<n2/2<<endl;
    }
    return 0;
}

