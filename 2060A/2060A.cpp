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

int main() {
        lli _;
    cin >> _;
    while (_--) {
        int a,b,d,e;
        cin>>a>>b>>d>>e;

        int c1, c2, c3;

        c1 = a+b;
        c2 = d-b;
        c3 = e-d;

        set<int>st;
        st.insert(c1);
        st.insert(c2);
        st.insert(c3);

        if (st.size() == 3) {
            cout<<1<<endl;
        }
        else if (st.size() == 2) {
            cout<<2<<endl;
        } else {
            cout<<3<<endl;
        }
    }
    return 0;
}

