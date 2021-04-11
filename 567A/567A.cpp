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

//cin.ignore();
//getline(cin,s);

//md.imrul kayes
int main()
{

    //int t;cin>>t;
    //while(t--)
    {
        int n;cin>>n;
        lli arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];

        cout<<arr[1]-arr[0]<<' '<<arr[n-1]-arr[0]<<endl;
        lli MAX = LONG_MIN;
        lli MIN = LONG_MAX;
        for(int i=1; i<n-1; i++)
        {
            MAX = max((arr[i]-arr[0]),(arr[n-1]-arr[i]));
            MIN = min((arr[i+1]-arr[i]),(arr[i]-arr[i-1]));
            cout<<MIN<<' '<<MAX<<endl;
        }
        cout<<arr[n-1]-arr[n-2]<<' '<<arr[n-1]-arr[0]<<endl;
    }

    return 0;
}

