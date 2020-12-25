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
        int n;cin>>n;
        string s;cin>>s;
        int m = count(s.begin(),s.end(),'b');
        string s1,s2;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='b')
                continue;
            s2+=s[i];
        }
        for(int i=0; i<m; i++)
            s1+='b';
        cout<<s1+s2<<endl;
    }

    return 0;
}
