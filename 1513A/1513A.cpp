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
        int n,k;cin>>n>>k;
        int temp = n/2;
        if(n%2)temp++;
        if(temp<=k)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int>v;
        int i;
        for(i=1; i<=n-k; i++)
            v.push_back(i);

        int p = 1;
        for( ; i<=n; i++)
        {
            v.insert(v.begin()+p, i);
            p+=2;
        }

        for(auto f: v)
            cout<<f<<' ';
        cout<<endl;

    }
    return 0;
}

