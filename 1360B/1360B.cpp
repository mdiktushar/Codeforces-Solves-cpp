#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define lli long long int
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

lli findSum(int A[], int N) {
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
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        while(n--)
        {
            int i;cin>>i;
            v.push_back(i);
        }
        int f = 0;
        for(auto it = v.begin(); it!=v.end(); it++)
        {
            if(count(v.begin(),v.end(),*it)>1)
            {
                f++; break;
            }
        }

        if(f!=0)
            cout<<0<<endl;
        else
        {
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
            n = v.size();
            int m = INT_MAX;
            for(int i=0; i<n-1; i++)
            {
                int a = v[i]-v[i+1];
                if(m>a)
                    m=a;
            }
            cout<<m<<endl;
        }
    }
    return 0;
}
