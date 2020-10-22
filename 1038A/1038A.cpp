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
    int n,k;
    cin>>n>>k;

    string s,r;cin>>s;
    set<char>st;

    for(int i=0; i<n; i++)
    {
        st.insert(s[i]);
    }
    if(st.size()!=k)
    {
        cout<<0<<endl;
        return 0;
    }
    int m=INT_MAX;
    for(auto i:st)
    {
        int temp = count(s.begin(),s.end(),i);
        if(temp<m)m=temp;
    }
    cout<<m*k<<endl;

    return 0;
}

