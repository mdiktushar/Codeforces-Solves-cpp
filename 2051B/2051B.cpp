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
        int n;cin>>n;
        lli sum = 0;
        int a,b,c;
        cin>>a>>b>>c;
        sum = a+b+c;

        int d = n / sum;
        d *= 3;

        int reminder = n % sum;

        if (!reminder)
        {
            cout<<d<<endl;
        }
        else if (reminder <= a){
            d++;
            cout<<d<<endl;
        }
        else if (reminder <= a+b){
            d += 2;
            cout<<d<<endl;
        }
        else {
            d += 3;
            cout<<d<<endl;
        }
    }
    return 0;
}
