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
    read:

    while(t--)
    {
        lli n;cin>>n;
        lli x = sqrt(n)+1;

        for(int i=2; i<x; i++)
        {
            if(n%i==0)
            {
                int y;
                x = n/i; y=n-x;
                cout<<x<<' '<<y<<endl;
                goto read;
            }
        }
        cout<<1<<' '<<--n<<endl;
    }
    return 0;
}

