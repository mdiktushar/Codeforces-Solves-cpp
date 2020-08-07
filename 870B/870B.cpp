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
    lli n,k;cin>>n>>k;
    vector<lli>v;
    while(n--)
    {
        lli i;cin>>i;
        v.push_back(i);
    }

    if(k==1)
        cout<<*min_element(v.begin(),v.end())<<endl;
    else if (k>=3)
        cout<<*max_element(v.begin(),v.end())<<endl;
    else
    {
        cout<<max(v.front(),v.back())<<endl;
    }

    return 0;
}


