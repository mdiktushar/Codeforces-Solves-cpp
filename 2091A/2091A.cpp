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
        int zero = 3, one = 1, two = 2, three = 1, five = 1;

        int r = 0;
        bool f = false;
        while (n--)
        {
            int i;cin>>i;
            if (i==0 && zero)zero--;
            else if (i==1 && one)one--;
            else if (i==2 && two)two--;
            else if (i==3 && three)three--;
            else if (i==5 && five)five--;

            if (zero || one || two || three || five) {
                r++;
            }
            if (!zero && !one && !two && !three && !five) {
                f = true;
            }
        }

        if (f) {
            cout<<++r<<endl;
        }
        else cout<<0<<endl;


    }
    return 0;
}
