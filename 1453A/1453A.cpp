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
        int arr1[100], arr2[100];
        int n1,n2;
        cin>>n1>>n2;
        for(int i=0; i<n1; i++)
            cin>>arr1[i];
        for(int i=0; i<n2; i++)
            cin>>arr2[i];

        int res = 0;
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<n2; j++)
            {
                if(arr1[i]<arr2[j])
                    break;
                if(arr1[i]==arr2[j]){
                    res++;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
