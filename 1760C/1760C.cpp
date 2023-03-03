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
    lli t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector <int> v1,v2;
        while(n--){
            int i;cin>>i;
            v1.push_back(i);
            v2.push_back(i);
        }
        n = v1.size();
        sort(v2.begin(), v2.end());
        for(int i = 0; i < n; i++) {
            if (v1[i] == v2[n-1])
                cout<<v1[i] - v2[n-2]<<' ';
            else
                cout<<v1[i] - v2[n-1]<<' ';
        }
        cout<<endl;
    }

    return 0;
}


