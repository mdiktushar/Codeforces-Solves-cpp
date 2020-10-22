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
    first:
    while(t--)
    {
        lli n;cin>>n;
        set<lli>st;
        lli arr[n];
        lli mx = LONG_MIN;
        for(lli i=0; i<n; i++)
        {
            lli a;cin>>a;
            arr[i]=a;
            st.insert(a);
            if(a>mx)
                mx=a;
        }
        if(st.size()==1)
        {
            cout<<-1<<endl;
            goto first;
        }

        for(lli i=0; i<n; i++)
        {
            if(arr[i]==mx)
            {
                if(i==0 && arr[i+1]<arr[i])
                {
                    cout<<i+1<<endl;
                    goto first;
                }
                else if(i==n-1 && arr[i-1]<arr[i])
                {
                    cout<<i+1<<endl;
                    goto first;
                }
                else if(arr[i]>arr[i-1] || arr[i]>arr[i+1])
                {
                    cout<<i+1<<endl;
                    goto first;
                }
            }
        }

    }
    return 0;
}

