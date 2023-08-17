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

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a,b,c;
        a = n/3;
        b = a; c = b;
        int sum = n - a*3;
        if (sum%2) {
            sum /= 2;
            a += sum;
            b += sum;
            b++;
            if (a == c) {
                cout<< a  <<' '<< ++b <<' '<< --c <<endl;
            }
            else
                cout<< a  <<' '<< b <<' '<< c <<endl;
        }
        else {
            sum /= 2;
            cout<< a + sum <<' '<< b + sum + 1 <<' '<< --c <<endl;
        }

    }

    return 0;
}


