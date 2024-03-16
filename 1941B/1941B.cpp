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
        int n; string s;
        cin>>n>>s;
        int c=0;
        int f = -1;
        while (1) {
            f = s.find("pie", f+1);
            if (f == -1)
                break;
            c++;
        }

        f = -1;
        while (1) {
            f = s.find("map", f+1);
            if (f == -1)
                break;
            c++;
        }

        int d = 0;
        f = -1;
        while (1) {
            f = s.find("mapie", f+1);
            if (f == -1)
                break;
            d++;
        }
        cout<<c-d<<endl;
    }
    return 0;
}

