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
        int n,x,y;
        cin>>n>>x>>y;
        int diff = y-x;
        if(n==2)
        {
            cout<<x<<' '<<y<<endl;continue;
        }
        for(int i=1; i<=diff; i++)
        {
            if(diff%i)continue;
            if(diff/i+1>n)continue;
            int k = min((y-1)/i, n-1);
            int j = y-k*i;
            for(int p=0; p<n; p++)
                cout<<(j+p*i)<<' ';
            cout<<endl;
            break;
        }



    }
    return 0;
}

