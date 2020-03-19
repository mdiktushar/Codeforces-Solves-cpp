#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define ll long long
#define l long

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

//md.imrul kayes
int main()
{
    int n = 3;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }cin>>n;

    sort(arr,arr+3);

    int p=0;
    int f = arr[1] - arr[0];
    if(f<n){
        p = n-f;
    }
    f = arr[2] - arr[1];
    if(f<n){
        p += (n-f);
    }
    cout<<p<<endl;
    return 0;
}
