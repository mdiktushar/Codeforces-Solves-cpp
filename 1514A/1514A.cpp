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
    int __;cin>>__;
    while(__--){

        int n;cin>>n;
        int arr[n];
        bool f = false;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            double b = sqrt(arr[i]);
            int c = sqrt(arr[i]);
            if(c!=b)
                f=true;
            //cout<<c<<' '<<b<<endl;
        }
        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}



