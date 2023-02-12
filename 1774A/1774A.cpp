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
        int n;cin>>n;
        string s,r;cin>>s;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == '1') sum++;
        }
        sum /= 2;
//        cout<<sum<<endl;
        for (int i = n-1; i >= 1; i--) {
            if(sum && s[i] == '1') {
                r.push_back('-');
                sum--;
            }
            else if (s[i] == '0') {
                r.push_back('-');
            }
            else {
                r.push_back('+');
            }
        }
        reverse(r.begin(), r.end());
        for(auto i : r) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}

