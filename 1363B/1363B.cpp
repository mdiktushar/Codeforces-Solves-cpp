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
        string s;cin>>s;
        int n = s.size();
        int m = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int t1=0, t2=0;
            for(int j=0; j<i; j++)
                if(s[j]=='1')t1++;
            for(int j=i+1; j<n; j++)
                if(s[j]=='0')t1++;

            for(int j=0; j<i; j++)
                if(s[j]=='0')t2++;
            for(int j=i+1; j<n; j++)
                if(s[j]=='1')t2++;

            if(m>min(t1,t2))
                m=min(t1,t2);
        }
        cout<<m<<endl;

    }
    return 0;
}

