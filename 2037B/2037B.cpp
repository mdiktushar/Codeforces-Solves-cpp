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
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int N = n - 2;
        unordered_map<int, int> mp;
        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0 && N % arr[i] == 0) {
                int complement = N / arr[i];
                if (mp.find(complement) != mp.end()) {
                    a = arr[i];
                    b = complement;
                    break;
                }
            }
            mp[arr[i]] = i;
        }
        cout << a << ' ' << b << endl;
    }
    return 0;
}
