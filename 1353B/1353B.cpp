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

lli findSum(lli A[], lli N) {
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
        lli a[n],b[n];
        for(lli i=0; i<n; i++)
            cin>>a[i];
        for(lli i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        for(int i=0; i<n; i++)
        {
            if(k==0)break;
            if(a[i]<b[i])
            {
                swap(a[i],b[i]);
                k--;
            }
            else break;
        }
        cout<<findSum(a,n)<<endl;

    }
    return 0;
}
