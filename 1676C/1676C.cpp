
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
    while(t--)
    {
        int n,m;cin>>n>>m;
        string s[n];
        int M = INT_MAX;
        for(int i=0; i<n; i++)
            cin>>s[i];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int temp = 0;
                if(j==i)
                    continue;
                for(int k=0; k<m; k++)
                {
                    temp += abs(s[i][k] - s[j][k]);
                }
                M = min(temp, M);
            }
        }
        cout<<M<<endl;
    }
    return 0;
}


