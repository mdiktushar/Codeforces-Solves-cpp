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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int h = n/2;
        if(h%2!=0 || n<4){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int num = 2;
        long long sum1=0;
        while(h--){
            cout<<num<<' ';
            sum1+=num;
            num+=2;
        }
        num=1;
        h = n/2;h--;
        long long sum2=0;
        while(h--){
            cout<<num<<' ';
            sum2+=num;
            num+=2;
        }
        cout<<sum1-sum2<<endl;
    }
    return 0;
}
