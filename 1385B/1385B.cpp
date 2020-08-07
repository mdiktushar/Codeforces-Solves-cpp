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
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        n*=2;
        lli arr[n];
        vector<lli>res,v;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        v.push_back(arr[0]);
        res.push_back(arr[0]);
        for(int i=1; i<n; i++)
        {
            auto f = find(v.begin(),v.end(),arr[i]);
            if(f==v.end())
            {
                res.push_back(arr[i]);
                v.push_back(arr[i]);
            }
            else
            {
                v.erase(f);
            }
        }
        for(auto i:res)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

