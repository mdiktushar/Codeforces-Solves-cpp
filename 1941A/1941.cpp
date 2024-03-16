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
        int n,m,k;
        cin>>n>>m>>k;
        int b[n], c[m];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<m; i++)
            cin>>c[i];

        int r = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if (b[i]+c[j] <= k)
                    r++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}

