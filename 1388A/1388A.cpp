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
        lli n;cin>>n;
        if(n<=30)
        {
            cout<<"NO"<<endl;
            continue;
        }
        set<lli>st = {6,10,14};
        set<lli>st1 = {6,10,15};
        st.insert(n-(6+10+14));
        st1.insert(n-(6+10+15));
        if(st.size()==4)
        {
            cout<<"YES"<<endl;
            for(auto i:st)
                cout<<i<<' ';
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(auto i:st1)
                cout<<i<<' ';
            cout<<endl;
        }
    }
    return 0;
}
