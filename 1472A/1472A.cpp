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
    hi:
    while(t--){
        lli n,w,h;
        cin>>w>>h>>n;
        lli s=1;
        if(n==1){
            cout<<"YES"<<endl;
            goto hi;
        }
        while(w%2==0 || h%2==0)
        {
            if(w%2==0)
                w/=2;
            else
                h/=2;
            s*=2;
            if(s>=n){
                cout<<"YES"<<endl;
                goto hi;
            }

        }
        cout<<"NO"<<endl;

    }
}
