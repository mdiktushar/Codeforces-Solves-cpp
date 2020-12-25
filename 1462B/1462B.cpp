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
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
            cout<<"YES"<<endl;
        else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
