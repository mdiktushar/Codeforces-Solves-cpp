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


//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int th = n/3;
        int thm = n%3;
        if(th>1 && thm==1)
            cout<<th-2<<' '<<0<<' '<<1<<endl;
        else if(th>=1 && thm==2)
            cout<<th-1<<' '<<1<<' '<<0<<endl;
        else if(thm==0)
            cout<<th<<' '<<0<<' '<<0<<endl;
        else
            cout<<-1<<endl;

    }
    return 0;
}

