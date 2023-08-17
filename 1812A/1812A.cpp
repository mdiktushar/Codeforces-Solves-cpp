#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

#define lli long long int
#define ulli unsigned long long int
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

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
//    lli t;
//    cin>>t;
//    while(t--)
//    {
//        vector<int> v;
//        for (int i = 0; i < 4; i++) {
//            int n; cin>>n;
//            v.push_back(n);
//        }
//        int a = v.front();
//
//        sort(v.begin(), v.end());
//        reverse(v.begin(), v.end());
//
//        auto f = find(v.begin(), v.end(), a);
//        cout<< f-v.begin() <<endl;
//
//
//    }
cout<<"security"<<endl;
    return 0;
}

