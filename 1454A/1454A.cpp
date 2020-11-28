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

bool primetest(int n)
{

    if(n!=2 && n%2==0)
        return false;
    for(int i=3; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            arr[i]=i+1;
        reverse(arr,arr+n);

        if(n%2 != 0)
        {
            int mid = n/2;

            //int temp = arr[mid];
            //cout<< temp<<endl;
            swap(arr[mid],arr[n-1]);
        }

        for(int i=0; i<n; i++)
            cout<<arr[i]<<' ';
        cout<<endl;
    }
    return 0;
}
