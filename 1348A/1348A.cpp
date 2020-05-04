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
    while(t--){
        int n;cin>>n;
        vector<lli>v;
        int i=1;
        while(i<=n){
            v.push_back(pow(2,i++));
        }
        int N = n/2;
        lli a = v.back();
        v.pop_back();
        while(--N){
            a+=v.front();
            v.erase(v.begin());
        }
        lli b = 0;
        while(v.size()!=0){
            b+=v.front();
            v.erase(v.begin());
        }
        cout<<a-b<<endl;
    }
    return 0;
}
