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

void task(){

}

//md.imrul kayes
int main()
{

    int t;cin>>t;
    start:
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int res = 0;
        int temp = 0;
        for(int i=0; i<n-1; i++){
            int a1 = arr[i];
            int a2 = arr[i+1];
            if(a1>a2)
                swap(a1,a2);

            a1 *= 2;
            if(a1 < a2){
                while(true){
                    if(a2%2 != 0 ) a2++;

                    a2 /= 2;
                    res++;
                    if(a1 >= a2)
                        break;
                }
            }

        }
        cout<<res<<endl;

    }

    return 0;
}

