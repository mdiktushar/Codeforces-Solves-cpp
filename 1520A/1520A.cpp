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

    int __;cin>>__;
    start:
    while(__--){
       int n;cin>>n;
       string s;cin>>s;
       set<char> st;
       for(int i=0; i<n; i++)
       {
           st.insert(s[i]);
       }

       for(auto i: st)
       {
           int c = count(s.begin(), s.end(), i);
           string temp;
           for(int j=0; j<c; j++)
           {
               temp += i;
           }
           //cout<<temp<<endl;
           int f = s.find(temp);
           if(f == -1)
           {
               cout<<"NO"<<endl;
               goto start;
           }
       }
       cout<<"YES"<<endl;
    }

    return 0;
}



