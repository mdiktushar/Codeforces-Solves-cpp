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
        lli x,y,a,b;
        cin>>x>>y>>a>>b;
        lli sum1 = 0;
        sum1 += abs(x-a);
        if(y!=b)
        {
            sum1+=2;
        }
        sum1+=abs(y-b);

        lli sum2=0;
        sum2 += abs(y-b);
        if(a!=x)
        {
            sum2+=2;
        }
        sum2+=abs(a-x);
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}

