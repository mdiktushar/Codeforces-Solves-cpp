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
        int n,m;
        cin>>n>>m;
        if((n*m)%2!=0){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=m; j++){
                    if((i%2!=0 && j%2!=0)|| (i%2==0 && j%2==0))
                        cout<<'B';
                    else cout<<'W';
                }cout<<endl;
            }
        }
        else{
            int f=0;
            for(int i=1; i<=n; i++){
                for(int j=1; j<=m; j++){
                    if((i%2!=0 && j%2!=0)|| (i%2==0 && j%2==0))
                        cout<<'B';
                    else if(f==0){
                        cout<<'B';
                        f++;
                    }
                    else
                        cout<<'W';
                }cout<<endl;
            }
        }
    }
    return 0;
}
