#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define lli long long int
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
    int t;cin>>t;
    while(t--)
    {
        lli n,k;
        cin>>n>>k;
        int f=0;
        if(n%2!=0){
            for(int i=2; i<=sqrt(n); i++){
                if(n%i==0){
                    n+=i;f++;
                    break;
                }
            }
            if(f==0)n+=n;
            --k;
            cout<<n+(k*2)<<endl;
        }
        else
            cout<<n+(k*2)<<endl;

    }
    return 0;
}

