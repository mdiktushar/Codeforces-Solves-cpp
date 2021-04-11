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
    int t;cin>>t;
    Start:
    while(t--)
    {
        lli a1, a2, a3, b1, b2, b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        lli m = min(a1, b3);
        a1 -= m;
        b3 -= m;

        m = min(a2, b1);
        a2 -= m;
        b1 -= m;

        m = min(a3, b2);
        a3 -= m;
        b2 -= m;
        lli sum = 2 * m;

        m =  min(a2, b3);
        m *= -2;
        sum += m;
        cout<<sum<<endl;
    }

    return 0;
}

