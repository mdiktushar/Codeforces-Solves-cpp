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

        bool f1=false, f2=false;
        int ans = 0, temp = 0;
        while(n--)
        {
            int i;cin>>i;
            if(i==1)
                f1=true;
            if(i==0 && f1==true)
            {
                temp++;
                f2=true;
            }
            if(i==1 && f2==true)
            {
                ans+=temp;
                temp=0;
                f2=false;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

