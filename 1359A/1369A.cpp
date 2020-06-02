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
        int n,m,k;
        cin>>n>>m>>k;
        if (n/k >= m)
        {
            cout<<m<<endl;
        }
        else if (n / k < m)
        {
            int x = m - n / k;
            int n1 = k - 1;
            if (x % n1 == 0) {
                int y = x / n1;
                cout<<(n / k - y)<<endl;
            }else {
                int y = x / n1;
                y++;
                cout<<(n / k - y)<<endl;
            }
        }
    }
    return 0;
}

