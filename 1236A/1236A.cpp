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
    for(int I=0; I<t; I++){
        int a,b,c;cin>>a>>b>>c;
        int sum=0;
        while(1){

            if(b>=c&&a>=1&&b>=2){
                a--;
                b-=2;
                sum+=3;
            }
            else if(b>=1&&c>=2){
                b--;
                c-=2;
                sum+=3;
            }
            else break;
        }
        cout<<sum<<endl;
    }

    return 0;
}

