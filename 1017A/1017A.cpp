#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define ll long long
#define l long

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

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

void viewarr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

//md.imrul kayes
int main()
{
    ll n;cin>>n;
    vector<ll> v;
    while(n--){
        ll num,sum = 0;
        for(int i=0; i<4; i++){
            cin>>num;
            sum += num;
        }
        v.push_back(sum);
    }
    int f = 0;
    for(auto i=v.begin()+1; i!=v.end(); i++){
        if(*i>*(v.begin()))
            f++;
    }
    cout<<f+1<<endl;
    return 0;
}
