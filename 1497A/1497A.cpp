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
        int n;cin>>n;
        set<int>st[101];
        pair<set<int>::iterator , bool> p;
        int N = INT_MIN;
        while(n--)
        {
            p.second = false;
            int j = 0;
            int i;cin>>i;
            while(!p.second)
            {
                p = st[j++].insert(i);
            }
            N = max(N,j);
        }
        for(int i=0; i<N; i++)
        {
            for(auto j : st[i])
               cout<<j<<' ';
        }
        cout<<endl;
    }
    return 0;
}
